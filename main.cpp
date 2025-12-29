#include <chrono>
#include <iostream>
#include "Graph.cpp"

void insertGedung(Graph *graph) {
    // Initialization of all campus vertices
    auto asrama_putra = createVertex("Asrama Putra");
    graph->vertices.push_back(asrama_putra);

    auto asrama_putri = createVertex("Asrama Putri");
    graph->vertices.push_back(asrama_putri);

    auto btp = createVertex("BTP");
    graph->vertices.push_back(btp);

    auto cacuk_a = createVertex("Cacuk A");
    graph->vertices.push_back(cacuk_a);

    auto cacuk_b = createVertex("Cacuk B");
    graph->vertices.push_back(cacuk_b);

    auto dagal = createVertex("Dagal");
    graph->vertices.push_back(dagal);

    auto damar = createVertex("Damar");
    graph->vertices.push_back(damar);

    auto ditmawa = createVertex("Ditmawa");
    graph->vertices.push_back(ditmawa);

    auto feb = createVertex("FEB");
    graph->vertices.push_back(feb);

    auto fik = createVertex("FIK");
    graph->vertices.push_back(fik);

    auto fit = createVertex("FIT");
    graph->vertices.push_back(fit);

    auto fks = createVertex("FKS");
    graph->vertices.push_back(fks);

    auto gate_1 = createVertex("Gate 1");
    graph->vertices.push_back(gate_1);

    auto gate_2 = createVertex("Gate 2");
    graph->vertices.push_back(gate_2);

    auto gate_3 = createVertex("Gate 3");
    graph->vertices.push_back(gate_3);

    auto gate_3_5 = createVertex("Gate 3.5");
    graph->vertices.push_back(gate_3_5);

    auto gate_4 = createVertex("Gate 4");
    graph->vertices.push_back(gate_4);

    auto gedung_c = createVertex("Gedung C");
    graph->vertices.push_back(gedung_c);

    auto gedung_d = createVertex("Gedung D");
    graph->vertices.push_back(gedung_d);

    auto gedung_e = createVertex("Gedung E");
    graph->vertices.push_back(gedung_e);

    auto gedung_f = createVertex("Gedung F");
    graph->vertices.push_back(gedung_f);

    auto gedung_l = createVertex("Gedung L");
    graph->vertices.push_back(gedung_l);

    auto gedung_ln = createVertex("Gedung LN");
    graph->vertices.push_back(gedung_ln);

    auto gedung_pasca_sarjana = createVertex("Gedung Pasca Sarjana");
    graph->vertices.push_back(gedung_pasca_sarjana);

    auto gku = createVertex("GKU");
    graph->vertices.push_back(gku);

    auto gsg = createVertex("GSG");
    graph->vertices.push_back(gsg);

    auto kantin_putra = createVertex("Kantin Putra");
    graph->vertices.push_back(kantin_putra);

    auto mbz = createVertex("MBZ");
    graph->vertices.push_back(mbz);

    auto rektorat = createVertex("Rektorat");
    graph->vertices.push_back(rektorat);

    auto sport_centre = createVertex("Sport Centre");
    graph->vertices.push_back(sport_centre);

    auto telmed = createVertex("Telmed");
    graph->vertices.push_back(telmed);

    auto t_mart = createVertex("T-Mart");
    graph->vertices.push_back(t_mart);

    auto tu_mart = createVertex("TJ Mart");
    graph->vertices.push_back(tu_mart);

    auto tuch = createVertex("TUCH");
    graph->vertices.push_back(tuch);

    auto tult = createVertex("TULT");
    graph->vertices.push_back(tult);

    // Asrama Putra edges
    insertEdge(asrama_putra, createEdge(tult, 50));
    insertEdge(asrama_putra, createEdge(kantin_putra, 35));
    insertEdge(asrama_putra, createEdge(tu_mart, 40));

    // Asrama Putri edges
    insertEdge(asrama_putri, createEdge(sport_centre, 20));
    insertEdge(asrama_putri, createEdge(tu_mart, 260));
    insertEdge(asrama_putri, createEdge(gku, 30));
    insertEdge(asrama_putri, createEdge(gedung_l, 50));
    insertEdge(asrama_putri, createEdge(rektorat, 80));
    insertEdge(asrama_putri, createEdge(t_mart, 10));
    insertEdge(asrama_putri, createEdge(telmed, 350));

    // BTP edges
    insertEdge(btp, createEdge(tult, 200));
    insertEdge(btp, createEdge(gate_1, 400));
    insertEdge(btp, createEdge(tuch, 120));

    // Cacuk A edges
    insertEdge(cacuk_a, createEdge(rektorat, 35));
    insertEdge(cacuk_a, createEdge(dagal, 130));
    insertEdge(cacuk_a, createEdge(damar, 80));
    insertEdge(cacuk_a, createEdge(gate_3, 130));

    // Cacuk B edges
    insertEdge(cacuk_b, createEdge(rektorat, 90));
    insertEdge(cacuk_b, createEdge(damar, 60));
    insertEdge(cacuk_b, createEdge(gate_3, 150));
    insertEdge(cacuk_b, createEdge(gate_3_5, 130));
    insertEdge(cacuk_b, createEdge(mbz, 80));

    // Dagal edges
    insertEdge(dagal, createEdge(fik, 100));
    insertEdge(dagal, createEdge(gku, 170));
    insertEdge(dagal, createEdge(rektorat, 130));
    insertEdge(dagal, createEdge(cacuk_a, 130));
    insertEdge(dagal, createEdge(gate_3, 160));

    // Damar edges
    insertEdge(damar, createEdge(t_mart, 85));
    insertEdge(damar, createEdge(rektorat, 110));
    insertEdge(damar, createEdge(cacuk_a, 80));
    insertEdge(damar, createEdge(cacuk_b, 60));
    insertEdge(damar, createEdge(gedung_ln, 55));
    insertEdge(damar, createEdge(mbz, 180));

    // Ditmawa edges
    insertEdge(ditmawa, createEdge(gsg, 15));
    insertEdge(ditmawa, createEdge(gedung_f, 60));
    insertEdge(ditmawa, createEdge(telmed, 20));

    // FEB edges
    insertEdge(feb, createEdge(gate_1, 150));
    insertEdge(feb, createEdge(tuch, 50));
    insertEdge(feb, createEdge(fks, 5));
    insertEdge(feb, createEdge(fik, 35));

    // FIK edges
    insertEdge(fik, createEdge(feb, 35));
    insertEdge(fik, createEdge(fks, 115));
    insertEdge(fik, createEdge(tuch, 35));
    insertEdge(fik, createEdge(gate_2, 250));
    insertEdge(fik, createEdge(fit, 155));
    insertEdge(fik, createEdge(dagal, 100));

    // FIT edges
    insertEdge(fit, createEdge(gate_2, 50));
    insertEdge(fit, createEdge(fik, 155));

    // FKS edges
    insertEdge(fks, createEdge(gate_1, 50));
    insertEdge(fks, createEdge(feb, 5));
    insertEdge(fks, createEdge(gate_2, 115));
    insertEdge(fks, createEdge(fik, 115));
    insertEdge(fks, createEdge(tuch, 255));

    // Gate 1 edges
    insertEdge(gate_1, createEdge(btp, 400));
    insertEdge(gate_1, createEdge(feb, 150));
    insertEdge(gate_1, createEdge(fks, 50));

    // Gate 2 edges
    insertEdge(gate_2, createEdge(fks, 115));
    insertEdge(gate_2, createEdge(tuch, 385));
    insertEdge(gate_2, createEdge(fik, 250));
    insertEdge(gate_2, createEdge(fit, 50));

    // Gate 3 edges
    insertEdge(gate_3, createEdge(dagal, 160));
    insertEdge(gate_3, createEdge(rektorat, 210));
    insertEdge(gate_3, createEdge(cacuk_a, 130));
    insertEdge(gate_3, createEdge(cacuk_b, 150));
    insertEdge(gate_3, createEdge(gate_3_5, 120));

    // Gate 3.5 edges
    insertEdge(gate_3_5, createEdge(cacuk_b, 130));
    insertEdge(gate_3_5, createEdge(gate_3, 120));
    insertEdge(gate_3_5, createEdge(mbz, 90));

    // Gate 4 edges
    insertEdge(gate_4, createEdge(mbz, 60));
    insertEdge(gate_4, createEdge(gedung_c, 170));
    insertEdge(gate_4, createEdge(gedung_e, 165));
    insertEdge(gate_4, createEdge(telmed, 230));

    // Gedung C edges
    insertEdge(gedung_c, createEdge(mbz, 60));
    insertEdge(gedung_c, createEdge(gedung_ln, 140));
    insertEdge(gedung_c, createEdge(gedung_d, 20));
    insertEdge(gedung_c, createEdge(gedung_pasca_sarjana, 12));
    insertEdge(gedung_c, createEdge(gate_4, 170));

    // Gedung D edges
    insertEdge(gedung_d, createEdge(gedung_ln, 55));
    insertEdge(gedung_d, createEdge(gedung_c, 20));
    insertEdge(gedung_d, createEdge(gsg, 45));
    insertEdge(gedung_d, createEdge(gedung_pasca_sarjana, 10));

    // Gedung E edges
    insertEdge(gedung_e, createEdge(gsg, 5));
    insertEdge(gedung_e, createEdge(gedung_pasca_sarjana, 15));
    insertEdge(gedung_e, createEdge(gedung_f, 40));
    insertEdge(gedung_e, createEdge(gate_4, 165));

    // Gedung F edges
    insertEdge(gedung_f, createEdge(gedung_e, 40));
    insertEdge(gedung_f, createEdge(ditmawa, 60));
    insertEdge(gedung_f, createEdge(telmed, 80));

    // Gedung L edges
    insertEdge(gedung_l, createEdge(asrama_putri, 50));
    insertEdge(gedung_l, createEdge(gku, 35));
    insertEdge(gedung_l, createEdge(rektorat, 102));
    insertEdge(gedung_l, createEdge(t_mart, 110));

    // Gedung LN edges
    insertEdge(gedung_ln, createEdge(t_mart, 130));
    insertEdge(gedung_ln, createEdge(damar, 55));
    insertEdge(gedung_ln, createEdge(gedung_c, 140));
    insertEdge(gedung_ln, createEdge(gedung_d, 55));
    insertEdge(gedung_ln, createEdge(gsg, 80));

    // Gedung Pasca Sarjana edges
    insertEdge(gedung_pasca_sarjana, createEdge(gedung_c, 12));
    insertEdge(gedung_pasca_sarjana, createEdge(gedung_d, 10));
    insertEdge(gedung_pasca_sarjana, createEdge(gedung_e, 15));

    // GKU edges
    insertEdge(gku, createEdge(sport_centre, 130));
    insertEdge(gku, createEdge(tuch, 140));
    insertEdge(gku, createEdge(asrama_putri, 30));
    insertEdge(gku, createEdge(gedung_l, 35));
    insertEdge(gku, createEdge(rektorat, 130));
    insertEdge(gku, createEdge(dagal, 170));

    // GSG edges
    insertEdge(gsg, createEdge(gedung_ln, 80));
    insertEdge(gsg, createEdge(gedung_d, 45));
    insertEdge(gsg, createEdge(gedung_e, 5));
    insertEdge(gsg, createEdge(ditmawa, 15));

    // Kantin Putra edges
    insertEdge(kantin_putra, createEdge(tult, 90));
    insertEdge(kantin_putra, createEdge(asrama_putra, 35));

    // MBZ edges
    insertEdge(mbz, createEdge(damar, 180));
    insertEdge(mbz, createEdge(cacuk_b, 80));
    insertEdge(mbz, createEdge(gate_3_5, 90));
    insertEdge(mbz, createEdge(gedung_c, 60));
    insertEdge(mbz, createEdge(gate_4, 60));

    // Rektorat edges
    insertEdge(rektorat, createEdge(asrama_putri, 80));
    insertEdge(rektorat, createEdge(gku, 130));
    insertEdge(rektorat, createEdge(gedung_l, 102));
    insertEdge(rektorat, createEdge(dagal, 130));
    insertEdge(rektorat, createEdge(cacuk_a, 35));
    insertEdge(rektorat, createEdge(cacuk_b, 90));
    insertEdge(rektorat, createEdge(damar, 110));
    insertEdge(rektorat, createEdge(gate_3, 210));

    // Sport Centre edges
    insertEdge(sport_centre, createEdge(tuch, 210));
    insertEdge(sport_centre, createEdge(tu_mart, 25));
    insertEdge(sport_centre, createEdge(asrama_putri, 20));
    insertEdge(sport_centre, createEdge(gku, 130));

    // Telmed edges
    insertEdge(telmed, createEdge(asrama_putri, 350));
    insertEdge(telmed, createEdge(gedung_f, 80));
    insertEdge(telmed, createEdge(ditmawa, 20));
    insertEdge(telmed, createEdge(gate_4, 230));

    // T-Mart edges
    insertEdge(t_mart, createEdge(asrama_putri, 10));
    insertEdge(t_mart, createEdge(gedung_l, 110));
    insertEdge(t_mart, createEdge(damar, 85));
    insertEdge(t_mart, createEdge(gedung_ln, 130));

    // TU Mart edges
    insertEdge(tu_mart, createEdge(asrama_putra, 40));
    insertEdge(tu_mart, createEdge(sport_centre, 25));
    insertEdge(tu_mart, createEdge(asrama_putri, 260));

    // TUCH edges
    insertEdge(tuch, createEdge(btp, 120));
    insertEdge(tuch, createEdge(feb, 50));
    insertEdge(tuch, createEdge(fks, 255));
    insertEdge(tuch, createEdge(gate_2, 385));
    insertEdge(tuch, createEdge(fik, 35));
    insertEdge(tuch, createEdge(sport_centre, 210));
    insertEdge(tuch, createEdge(gku, 140));

    // TULT edges
    insertEdge(tult, createEdge(kantin_putra, 90));
    insertEdge(tult, createEdge(asrama_putra, 50));
    insertEdge(tult, createEdge(btp, 200));
}

void dijkstra(Graph *graph, const string &startId, const string &finishId) {
    printf("Asal: %s, Tujuan: %s\n", startId.c_str(), finishId.c_str());

    auto start1 = chrono::steady_clock::now();
    auto ketemu1 = dijkstraIteratif(graph, startId, finishId);
    auto end1 = chrono::steady_clock::now();
    chrono::duration<double, micro> durasi1 = end1 - start1;

    auto start2 = chrono::steady_clock::now();
    auto ketemu2 = dijkstraRekursif(graph, startId, finishId);
    auto end2 = chrono::steady_clock::now();
    chrono::duration<double, micro> durasi2 = end2 - start2;

    if (ketemu1 == -1 || ketemu2 == -1) {
        cout << "Jalur tidak ditemukan" << endl;
    } else {
        printPath(*graph, finishId);
    }

    printf("Durasi iteratif: %f microsecond\n", durasi1.count());
    printf("Durasi rekursif: %f microsecond\n", durasi2.count());

    cout << endl;
}

int main() {
    Graph graph{};

    insertGedung(&graph);

    cout << "Original" << endl;
    printGraph(graph);
    cout << endl;

    vector<pair<string, string> > perjalanan{
        {"TULT", "Gate 4"}, {"TULT", "BTP"}, {"Damar", "FEB"}, {"Cacuk B", "Gate 2"}, {"Telmed", "BTP"}
    };

    for (auto p: perjalanan) {
        string startId{p.first};
        string finishId{p.second};

        dijkstra(&graph, startId, finishId);
    }

    return 0;
}
