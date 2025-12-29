#include <filesystem>
#include <iostream>
#include <limits>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

struct Edge {
    struct Vertex *target;
    int weight;
    Edge *next;
};

struct Vertex {
    string id;
    int distance{};
    Edge *firstEdge{};
    Vertex *prevVertex{};
};

struct Graph {
    vector<Vertex *> vertices;
};

Vertex *createVertex(string id) {
    auto v = new Vertex();
    v->id = std::move(id);
    return v;
}

Edge *createEdge(Vertex *target, int weight) {
    auto e = new Edge();
    e->target = target;
    e->weight = weight;
    return e;
}

void insertEdge(Vertex *vertex, Edge *edge) {
    if (vertex->firstEdge == nullptr) {
        vertex->firstEdge = edge;
    } else {
        auto edge2 = vertex->firstEdge;
        while (edge2->next != nullptr) {
            edge2 = edge2->next;
        }
        edge2->next = edge;
    }
}

void printGraph(Graph g) {
    for (auto v: g.vertices) {
        printf("Gedung %s (%d, %s) : ", v->id.c_str(), v->distance,
               (v->prevVertex == nullptr ? "" : v->prevVertex->id).c_str());
        Edge *e = v->firstEdge;
        while (e != nullptr) {
            printf("%s, ", e->target->id.c_str());
            e = e->next;
        }
        cout << endl;
    }
}

void printPath(Graph g, const string &finish) {
    Vertex *current = nullptr;
    for (auto u: g.vertices) {
        if (u->id == finish) current = u;
    }

    if (current == nullptr) {
        cout << "Tidak ditemukan solusi" << endl;
        return;
    }

    int distance = current->distance;

    string jalur;
    while (current != nullptr) {
        jalur = current->id + ", " + jalur;
        current = current->prevVertex;
    }
    printf("Jalur: %s\n", jalur.c_str());
    printf("Jarak: %d meter\n", distance);
}

int dijkstraIteratif(Graph *graph, const string &idStart, const string &idFinish) {
    typedef pair<int, Vertex *> Element;
    priority_queue<Element, vector<Element>, greater<Element> > pq;

    Vertex *startNode = nullptr;
    Vertex *finishNode = nullptr;

    for (auto u: graph->vertices) {
        u->prevVertex = nullptr;
        if (u->id == idStart) {
            u->distance = 0;
            startNode = u;
        } else {
            u->distance = numeric_limits<int>::max();
        }
        if (u->id == idFinish) finishNode = u;
    }

    if (!startNode || !finishNode) return -1;

    pq.push({0, startNode});

    while (!pq.empty()) {
        int distance = pq.top().first;
        Vertex *currentVertex = pq.top().second;
        pq.pop();

        if (distance > currentVertex->distance) continue; // Ga jelas

        if (currentVertex == finishNode) return 1;

        Edge *edge = currentVertex->firstEdge;
        while (edge != nullptr) {
            Vertex *targetVertex = edge->target;
            int weight = edge->weight;

            if (currentVertex->distance != numeric_limits<int>::max() &&
                currentVertex->distance + weight < targetVertex->distance) {
                targetVertex->distance = currentVertex->distance + weight;
                targetVertex->prevVertex = currentVertex;
                pq.push({targetVertex->distance, targetVertex});
            }
            edge = edge->next;
        }
    }

    return finishNode->distance == numeric_limits<int>::max() ? -1 : 1;
}

void dijkstraRekursifSub(
    priority_queue<pair<int, Vertex *>, vector<pair<int, Vertex *> >, greater<pair<int, Vertex *> > > &pq,
    Vertex *finishNode
) {
    if (pq.empty()) return;

    int distance = pq.top().first;
    Vertex *currentVertex = pq.top().second;
    pq.pop();

    if (distance > currentVertex->distance) {
        dijkstraRekursifSub(pq, finishNode);
        return;
    }

    if (currentVertex == finishNode) return;

    Edge *edge = currentVertex->firstEdge;
    while (edge != nullptr) {
        Vertex *targetVertex = edge->target;
        if (currentVertex->distance != numeric_limits<int>::max() &&
            currentVertex->distance + edge->weight < targetVertex->distance) {
            targetVertex->distance = currentVertex->distance + edge->weight;
            targetVertex->prevVertex = currentVertex;
            pq.push({targetVertex->distance, targetVertex});
        }
        edge = edge->next;
    }

    dijkstraRekursifSub(pq, finishNode);
}

int dijkstraRekursif(Graph *graph, const string &idStart, const string &idFinish) {
    typedef pair<int, Vertex *> Element;
    priority_queue<Element, vector<Element>, greater<Element> > pq;

    Vertex *startNode = nullptr;
    Vertex *finishNode = nullptr;

    // Initialization: O(V)
    for (auto u: graph->vertices) {
        u->prevVertex = nullptr;
        if (u->id == idStart) {
            u->distance = 0;
            startNode = u;
        } else {
            u->distance = numeric_limits<int>::max();
        }
        if (u->id == idFinish) finishNode = u;
    }

    if (!startNode || !finishNode) return -1;

    pq.push({0, startNode});

    dijkstraRekursifSub(pq, finishNode);

    return (finishNode->distance == numeric_limits<int>::max()) ? -1 : 1;
}
