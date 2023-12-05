
// maticova_kalkulacka.cpp: Definuje vstupní bod pro aplikaci.
//

#include "maticova_kalkulacka.h"
#include "operace.h"
#include <stdlib.h>
#include<math.h>
#include <windows.h>

#ifdef WIN32
#include <io.h>
#define F_OK 0
#define access _access
#endif



using namespace std;

char filename[MAX_PATH];

void work()
{


	system("cls");
	printf("2: rozmer 2x2\n");
	printf("3: rozmer 3x3\n");
	printf("4: rozmer 4x4\n");
	printf("5: rozmer 5x5\n\n");
	printf("Vyberte rozmer matice (zadejte moznost 2-5 a podvrdte enterem): ");
	int vyberRozmeru[VYBER_ROZMERU];
	scanf("%d", vyberRozmeru, VYBER_ROZMERU);
	system("cls");
	if (*vyberRozmeru == 2) {
		printf("Rozmer vybrane matice je 2x2.\n\n");
	}
	if (*vyberRozmeru == 3) {
		printf("Rozmer vybrane matice je 3x3.\n\n");
	}
	if (*vyberRozmeru == 4) {
		printf("Rozmer vybrane matice je 4x4.\n\n");
	}
	if (*vyberRozmeru == 5) {
		printf("Rozmer vybrane matice je 5x5.\n\n");
	}
	
	
	//vyber operaci s maticemi
	int vyberOperace[VYBER_OPERACE];
	if (*vyberRozmeru != 5) {

		printf("1: scitani matic\n");
		printf("2: odcitani matic\n");
		printf("3: nasobeni matice matici \n");
		printf("4: nasobeni matice skalarem \n");
		printf("5: vypocet determinantu matice \n");
		printf("6: vypocet transponovane matice \n\n");
		printf("Vyberte operaci (zadejte moznost 1-6 a podvrdte enterem): ");
		
		scanf("%d", vyberOperace, VYBER_OPERACE);
		system("cls");

		if (*vyberRozmeru == 2) {
			printf("Rozmer vybrane matice je 2x2.\n");
		}
		if (*vyberRozmeru == 3) {
			printf("Rozmer vybrane matice je 3x3.\n");
		}
		if (*vyberRozmeru == 4) {
			printf("Rozmer vybrane matice je 4x4.\n");
		}
		if (*vyberRozmeru == 5) {
			printf("Rozmer vybrane matice je 5x5.\n");
		}

		//veta operace
		if (*vyberOperace == 1) {
			printf("Vybrana operace je scitani.\n");
		}
		if (*vyberOperace == 2) {
			printf("Vybrana operace je odcitani.\n");
		}
		if (*vyberOperace == 3) {
			printf("Vybrana operace je nasobeni matice matici.\n");
		}
		if (*vyberOperace == 4) {
			printf("Vybrana operace je nasobeni skalarem.\n");
		}
		if (*vyberOperace == 5) {
			printf("Vybrana operace je vypocet determinantu.\n");
		}
		if (*vyberOperace == 6) {
			printf("Vybrana operace je transponovana matice.\n");
		}
	}

	
	int a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1, q1, r1, s1, t1, u1, v1, w1, x1, y1;
	int a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2, u2, v2, w2, x2, y2;
	int aV, bV, cV, dV, eV, fV, gV, hV, iV, jV, kV, lV, mV, nV, oV, pV, qV, rV, sV, tV, uV, vV, wV, xV, yV, determinant;
	int skalar[SKALAR];

	if (*vyberOperace == 4) {
		printf("Vyberte hodnotu skalaru: ");
		scanf("%d", skalar, SKALAR);
	}

	//vyber prvku matice A
	// 2x2
	if (*vyberRozmeru == 2) {
		printf("\nZadejte hodnoty matice A v nasledujicim tvaru: \n");
		printf("a b \nc d \n");
		printf("a = ");
		scanf("%d", &a1);
		printf("b = ");
		scanf("%d", &b1);
		printf("c = ");
		scanf("%d", &c1);
		printf("d = ");
		scanf("%d", &d1);
		system("cls");
		printf("Zvolena matice A: \n%d %d \n%d %d \n\n", a1, b1, c1, d1);
	}
	// 3x3
	if (*vyberRozmeru == 3) {
		printf("Zadejte hodnoty matice A v nasledujicim tvaru: \n");
		printf("a b c \nd e f \ng h i\n");
		printf("a = ");
		scanf("%d", &a1);

		printf("b = ");
		scanf("%d", &b1);

		printf("c = ");
		scanf("%d", &c1);

		printf("d = ");
		scanf("%d", &d1);

		printf("e = ");
		scanf("%d", &e1);

		printf("f = ");
		scanf("%d", &f1);

		printf("g = ");
		scanf("%d", &g1);

		printf("h = ");
		scanf("%d", &h1);

		printf("i = ");
		scanf("%d", &i1);

		system("cls");

		printf("Zvolena matice A: \n%d %d %d \n%d %d %d \n%d %d %d \n\n", a1, b1, c1, d1, e1, f1, g1, h1, i1);
	}
	//4x4
	if (*vyberRozmeru == 4) {
		printf("Zadejte hodnoty matice A v nasledujicim tvaru: \n");
		printf("a b c d \ne f g h \ni j k l \nm n o p\n");
		printf("a = ");
		scanf("%d", &a1);

		printf("b = ");
		scanf("%d", &b1);

		printf("c = ");
		scanf("%d", &c1);

		printf("d = ");
		scanf("%d", &d1);

		printf("e = ");
		scanf("%d", &e1);

		printf("f = ");
		scanf("%d", &f1);

		printf("g = ");
		scanf("%d", &g1);

		printf("h = ");
		scanf("%d", &h1);

		printf("i = ");
		scanf("%d", &i1);

		printf("j = ");
		scanf("%d", &j1);

		printf("k = ");
		scanf("%d", &k1);

		printf("l = ");
		scanf("%d", &l1);

		printf("m = ");
		scanf("%d", &m1);

		printf("n = ");
		scanf("%d", &n1);

		printf("o = ");
		scanf("%d", &o1);

		printf("p = ");
		scanf("%d", &p1);

		system("cls");

		printf("Zvolena matice A: \n%d %d %d %d \n%d %d %d %d \n%d %d %d %d \n%d %d %d %d \n\n",
			a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1);
	}
	

	//vyber prvku matice B
	if (*vyberOperace >= 1 && *vyberOperace <= 3) {
		// 2x2
		if (*vyberRozmeru == 2) {
			printf("Zadejte hodnoty matice B v nasledujicim tvaru: \n");
			printf("a b \nc d \n");
			printf("a = ");
			scanf("%d", &a2);
			printf("b = ");
			scanf("%d", &b2);
			printf("c = ");
			scanf("%d", &c2);
			printf("d = ");
			scanf("%d", &d2);
			system("cls");
			printf("Zvolena matice A: \n%d %d \n%d %d \n\n", a1, b1, c1, d1);
			printf("Zvolena matice B: \n%d %d \n%d %d \n\n", a2, b2, c2, d2);
		}
		// 3x3
		if (*vyberRozmeru == 3) {
			printf("Zadejte hodnoty matice v nasledujicim tvaru: \n");
			printf("a b c \nd e f \ng h i\n");
			printf("a = ");
			scanf("%d", &a2);

			printf("b = ");
			scanf("%d", &b2);

			printf("c = ");
			scanf("%d", &c2);

			printf("d = ");
			scanf("%d", &d2);

			printf("e = ");
			scanf("%d", &e2);

			printf("f = ");
			scanf("%d", &f2);

			printf("g = ");
			scanf("%d", &g2);

			printf("h = ");
			scanf("%d", &h2);

			printf("i = ");
			scanf("%d", &i2);

			system("cls");


			printf("Zvolena matice A: \n%d %d %d \n%d %d %d \n%d %d %d \n\n", a1, b1, c1, d1, e1, f1, g1, h1, i1);
			printf("Zvolena matice B: \n%d %d %d \n%d %d %d \n%d %d %d \n\n", a2, b2, c2, d2, e2, f2, g2, h2, i2);
		}
		//4x4
		if (*vyberRozmeru == 4) {
			printf("Zadejte hodnoty matice A v nasledujicim tvaru: \n");
			printf("a b c d \ne f g h \ni j k l \nm n o p\n");
			printf("a = ");
			scanf("%d", &a2);

			printf("b = ");
			scanf("%d", &b2);

			printf("c = ");
			scanf("%d", &c2);

			printf("d = ");
			scanf("%d", &d2);

			printf("e = ");
			scanf("%d", &e2);

			printf("f = ");
			scanf("%d", &f2);

			printf("g = ");
			scanf("%d", &g2);

			printf("h = ");
			scanf("%d", &h2);

			printf("i = ");
			scanf("%d", &i2);

			printf("j = ");
			scanf("%d", &j2);

			printf("k = ");
			scanf("%d", &k2);

			printf("l = ");
			scanf("%d", &l2);

			printf("m = ");
			scanf("%d", &m2);

			printf("n = ");
			scanf("%d", &n2);

			printf("o = ");
			scanf("%d", &o2);

			printf("p = ");
			scanf("%d", &p2);

			system("cls");

			printf("Zvolena matice A: \n%d %d %d %d \n%d %d %d %d \n%d %d %d %d \n%d %d %d %d \n\n",
				a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1);
			printf("Zvolena matice B: \n%d %d %d %d \n%d %d %d %d \n%d %d %d %d \n%d %d %d %d \n\n",
				a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2);
		}
		
	}
	//5x5
	if (*vyberRozmeru == 5) {

		printf("1: scitani matic\n");
		printf("2: odcitani matic\n");
		printf("Vyberte operaci (zadejte moznost 1-2 a podvrdte enterem): ");
		int vyberOperace[VYBER_OPERACE];
		scanf("%d", vyberOperace, VYBER_OPERACE);
		system("cls");

		
		printf("Rozmer vybrane matice je 5x5.\n");
		if (*vyberRozmeru == 5) {
			printf("Zadejte hodnoty matice A v nasledujicim tvaru: \n");
			printf("a b c d e\nf g h i j\nk l m n o\np q r s t\nu v w x y\n");
			printf("a = ");
			scanf("%d", &a1);

			printf("b = ");
			scanf("%d", &b1);

			printf("c = ");
			scanf("%d", &c1);

			printf("d = ");
			scanf("%d", &d1);

			printf("e = ");
			scanf("%d", &e1);

			printf("f = ");
			scanf("%d", &f1);

			printf("g = ");
			scanf("%d", &g1);

			printf("h = ");
			scanf("%d", &h1);

			printf("i = ");
			scanf("%d", &i1);

			printf("j = ");
			scanf("%d", &j1);

			printf("k = ");
			scanf("%d", &k1);

			printf("l = ");
			scanf("%d", &l1);

			printf("m = ");
			scanf("%d", &m1);

			printf("n = ");
			scanf("%d", &n1);

			printf("o = ");
			scanf("%d", &o1);

			printf("p = ");
			scanf("%d", &p1);

			printf("q = ");
			scanf("%d", &q1);

			printf("r = ");
			scanf("%d", &r1);

			printf("s = ");
			scanf("%d", &s1);

			printf("t = ");
			scanf("%d", &t1);

			printf("u = ");
			scanf("%d", &u1);

			printf("v = ");
			scanf("%d", &v1);

			printf("w = ");
			scanf("%d", &w1);

			printf("x = ");
			scanf("%d", &x1);

			printf("y = ");
			scanf("%d", &y1);

			system("cls");

			printf("Zvolena matice A: \n%d %d %d %d %d \n%d %d %d %d %d \n%d %d %d %d %d \n%d %d %d %d %d\n%d %d %d %d %d \n\n",
				a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1, q1, r1, s1, t1, u1, v1, w1, x1, y1);
		}
		if (*vyberRozmeru == 5) {
			printf("Zadejte hodnoty matice A v nasledujicim tvaru: \n");
			printf("a b c d e\nf g h i j\nk l m n o\np q r s t\nu v w x y\n");
			printf("a = ");
			scanf("%d", &a2);

			printf("b = ");
			scanf("%d", &b2);

			printf("c = ");
			scanf("%d", &c2);

			printf("d = ");
			scanf("%d", &d2);

			printf("e = ");
			scanf("%d", &e2);

			printf("f = ");
			scanf("%d", &f2);

			printf("g = ");
			scanf("%d", &g2);

			printf("h = ");
			scanf("%d", &h2);

			printf("i = ");
			scanf("%d", &i2);

			printf("j = ");
			scanf("%d", &j2);

			printf("k = ");
			scanf("%d", &k2);

			printf("l = ");
			scanf("%d", &l2);

			printf("m = ");
			scanf("%d", &m2);

			printf("n = ");
			scanf("%d", &n2);

			printf("o = ");
			scanf("%d", &o2);

			printf("p = ");
			scanf("%d", &p2);

			printf("q = ");
			scanf("%d", &q2);

			printf("r = ");
			scanf("%d", &r2);

			printf("s = ");
			scanf("%d", &s2);

			printf("t = ");
			scanf("%d", &t2);

			printf("u = ");
			scanf("%d", &u2);

			printf("v = ");
			scanf("%d", &v2);

			printf("w = ");
			scanf("%d", &w2);

			printf("x = ");
			scanf("%d", &x2);

			printf("y = ");
			scanf("%d", &y2);

			system("cls");

			printf("Zvolena matice A: \n%d %d %d %d %d \n%d %d %d %d %d \n%d %d %d %d %d \n%d %d %d %d %d\n%d %d %d %d %d \n\n",
				a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1, q1, r1, s1, t1, u1, v1, w1, x1, y1);
			printf("Zvolena matice B: \n%d %d %d %d %d \n%d %d %d %d %d \n%d %d %d %d %d \n%d %d %d %d %d\n%d %d %d %d %d \n\n",
				a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2, u2, v2, w2, x2, y2);
		}

		FILE* vystupniSoubor;
		fopen_s(&vystupniSoubor, filename, "a+");

		if (*vyberOperace == 1) {
			rozmer5Soucet(a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1, q1, r1, s1, t1, u1, v1, w1, x1, y1,
				a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2, u2, v2, w2, x2, y2,
				&aV, &bV, &cV, &dV, &eV, &fV, &gV, &hV, &iV, &jV, &kV, &lV, &mV, &nV, &oV, &pV, &qV, &rV, &sV, &tV, &uV, &vV, &wV, &xV, &yV);
			printf("Soucet matic A a B o rozmeru 5x5 se rovna:\n\n%d %d %d %d %d\n%d %d %d %d %d\n%d %d %d %d %d\n%d %d %d %d %d\n%d %d %d %d %d\n\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV, jV, kV, lV, mV, nV, oV, pV, qV, rV, sV, tV, uV, vV, wV, xV, yV);
			fprintf(vystupniSoubor, "\nSoucet matic A a B o rozmeru 5x5 se rovna:\n\n%d %d %d %d %d\n%d %d %d %d %d\n%d %d %d %d %d\n%d %d %d %d %d\n%d %d %d %d %d\n------------",
				aV, bV, cV, dV, eV, fV, gV, hV, iV, jV, kV, lV, mV, nV, oV, pV, qV, rV, sV, tV, uV, vV, wV, xV, yV);
		}
		if (*vyberOperace == 2) {
			rozmer5Rozdil(a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1, q1, r1, s1, t1, u1, v1, w1, x1, y1,
				a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2, u2, v2, w2, x2, y2,
				&aV, &bV, &cV, &dV, &eV, &fV, &gV, &hV, &iV, &jV, &kV, &lV, &mV, &nV, &oV, &pV, &qV, &rV, &sV, &tV, &uV, &vV, &wV, &xV, &yV);
				printf("\nRozdil matic A a B o rozmeru 5x5 se rovna:\n\n%d %d %d %d %d\n%d %d %d %d %d\n%d %d %d %d %d\n%d %d %d %d %d\n%d %d %d %d %d\n\n",
					aV, bV, cV, dV, eV, fV, gV, hV, iV, jV, kV, lV, mV, nV, oV, pV, qV, rV, sV, tV, uV, vV, wV, xV, yV);
				fprintf(vystupniSoubor, "\nRozdil matic A a B o rozmeru 5x5 se rovna:\n\n%d %d %d %d %d\n%d %d %d %d %d\n%d %d %d %d %d\n%d %d %d %d %d\n%d %d %d %d %d\n------------\n",
					aV, bV, cV, dV, eV, fV, gV, hV, iV, jV, kV, lV, mV, nV, oV, pV, qV, rV, sV, tV, uV, vV, wV, xV, yV);
		}

		fclose(vystupniSoubor);
		}


	//reseni operaci

	
	if (vyberRozmeru[VYBER_ROZMERU] != 5) {
		//2x2
		//soucet
		FILE* vystupniSoubor;
		fopen_s(&vystupniSoubor, filename, "a+");
	
		if (*vyberOperace == 1 && *vyberRozmeru == 2) {
			rozmer2Soucet(a1, b1, c1, d1, a2, b2, c2, d2, &aV, &bV, &cV, &dV);
			printf("Soucet matic A a B o rozmeru 2x2 se rovna:\n\n%d %d\n%d %d\n\n", aV, bV, cV, dV);
			fprintf(vystupniSoubor, "\nSoucet matic A a B o rozmeru 2x2 se rovna:\n\n%d %d\n%d %d\n------------\n", aV, bV, cV, dV);
		}
		//rozdil
		if (*vyberOperace == 2 && *vyberRozmeru == 2) {
			rozmer2Rozdil(a1, b1, c1, d1, a2, b2, c2, d2, &aV, &bV, &cV, &dV);
			printf("Rozdil matic A a B o rozmeru 2x2 se rovna:\n\n%d %d\n%d %d\n\n", aV, bV, cV, dV);
			fprintf(vystupniSoubor, "\nRozdil matic A a B o rozmeru 2x2 se rovna:\n\n%d %d\n%d %d\n------------\n", aV, bV, cV, dV);
		}
		//nasobeni matice matici
		if (*vyberOperace == 3 && *vyberRozmeru == 2) {
			rozmer2NasobeniMatici(a1, b1, c1, d1, a2, b2, c2, d2, &aV, &bV, &cV, &dV);
			printf("Soucin matic A a B o rozmeru 2x2 se rovna:\n\n%d %d\n%d %d\n\n", aV, bV, cV, dV);
			fprintf(vystupniSoubor, "\nSoucin matic A a B o rozmeru 2x2 se rovna:\n\n%d %d\n%d %d\n------------\n", aV, bV, cV, dV);
		}
		//nasobeni matice skalarem
		if (*vyberOperace == 4 && *vyberRozmeru == 2) {
			rozmer2NasobeniSkalarem(a1, b1, c1, d1, *skalar, &aV, &bV, &cV, &dV);
			printf("Soucin matice A o rozmeru 2x2 a skalaru se rovna:\n\n%d %d\n%d %d\n\n", aV, bV, cV, dV);
			fprintf(vystupniSoubor, "\nSoucin matice A o rozmeru 2x2 a skalaru se rovna:\n\n%d %d\n%d %d\n------------\n", aV, bV, cV, dV);
		}
		//determinant
		if (*vyberOperace == 5 && *vyberRozmeru == 2) {
			rozmer2Determinant(a1, b1, c1, d1, &determinant);
			printf("Determinant matice A se rovna:\n%d\n", determinant);
			fprintf(vystupniSoubor, "\nDeterminant matice A se rovna:\n\n%d\n------------\n", determinant);
		}
		//transponovana
		if (*vyberOperace == 6 && *vyberRozmeru == 2) {
			rozmer2Transponovana(a1, b1, c1, d1, &aV, &bV, &cV, &dV);
			printf("Transponovana matice se rovna:\n\n%d %d\n%d %d\n\n", aV, bV, cV, dV);
			fprintf(vystupniSoubor, "\nTransponovana matice se rovna:\n\n%d %d\n%d %d\n--------------\n", aV, bV, cV, dV);
		}

		//3x3
		//soucet
		if (*vyberOperace == 1 && *vyberRozmeru == 3) {
			rozmer3Soucet(a1, b1, c1, d1, e1, f1, g1, h1, i1, a2, b2, c2, d2, e2, f2, g2, h2, i2, &aV, &bV, &cV, &dV, &eV, &fV, &gV, &hV, &iV);
			printf("Soucet matic A a B o rozmeru 3x3 se rovna:\n\n%d %d %d\n%d %d %d\n%d %d %d\n", aV, bV, cV, dV, eV, fV, gV, hV, iV);
			fprintf(vystupniSoubor, "\nSoucet matic A a B o rozmeru 3x3 se rovna:\n\n%d %d %d\n%d %d %d\n%d %d %d\n------------\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV);
		}
		//rozdil
		if (*vyberOperace == 2 && *vyberRozmeru == 3) {
			rozmer3Rozdil(a1, b1, c1, d1, e1, f1, g1, h1, i1, a2, b2, c2, d2, e2, f2, g2, h2, i2, &aV, &bV, &cV, &dV, &eV, &fV, &gV, &hV, &iV);
			printf("Rozdil matic A a B o rozmeru 3x3 se rovna:\n\n%d %d %d\n%d %d %d\n%d %d %d\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV);
			fprintf(vystupniSoubor, "\nRozdil matic A a B o rozmeru 3x3 se rovna:\n\n%d %d %d\n%d %d %d\n%d %d %d\n------------\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV);
		}
		//nasobeni matice matici
		if (*vyberOperace == 3 && *vyberRozmeru == 3) {
			rozmer3NasobeniMatici(a1, b1, c1, d1, e1, f1, g1, h1, i1, a2, b2, c2, d2, e2, f2, g2, h2, i2, &aV, &bV, &cV, &dV, &eV, &fV, &gV, &hV, &iV);
			printf("Soucin matic A a B o rozmeru 3x3 se rovna:\n\n%d %d %d\n%d %d %d\n%d %d %d\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV);
			fprintf(vystupniSoubor, "\nSoucin matic A a B o rozmeru 3x3 se rovna:\n\n%d %d %d\n%d %d %d\n%d %d %d\n------------\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV);
		}
		//nasobeni matice skalarem
		if (*vyberOperace == 4 && *vyberRozmeru == 3) {
			rozmer3NasobeniSkalarem(a1, b1, c1, d1, e1, f1, g1, h1, i1, *skalar, &aV, &bV, &cV, &dV, &eV, &fV, &gV, &hV, &iV);
			printf("Soucin matice A o rozmeru 3x3 a skalaru se rovna:\n\n%d %d %d\n%d %d %d\n%d %d %d\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV);
			fprintf(vystupniSoubor, "\nSoucin matice A o rozmeru 3x3 a skalaru se rovna:\n\n%d %d %d\n%d %d %d\n%d %d %d\n------------\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV);
		}
		//determinant
		if (*vyberOperace == 5 && *vyberRozmeru == 3) {
			rozmer3Determinant(a1, b1, c1, d1, e1, f1, g1, h1, i1, &determinant);
			printf("Determinant matice A se rovna:\n\n%d \n", determinant);
			fprintf(vystupniSoubor, "\nDeterminant matice A se rovna:\n\n%d\n------------\n", determinant);
		}
		//transponovana
		if (*vyberOperace == 6 && *vyberRozmeru == 3) {
			rozmer3Transponovana(a1, b1, c1, d1, e1, f1, g1, h1, i1, &aV, &bV, &cV, &dV, &eV, &fV, &gV, &hV, &iV);
			printf("Transponovana matice A se rovna:\n\n%d %d %d\n%d %d %d\n%d %d %d\n", aV, bV, cV, dV, eV, fV, gV, hV, iV);
			fprintf(vystupniSoubor, "\nTransponovana matice A se rovna:\n\n%d %d %d\n%d %d %d\n%d %d %d\n------------\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV);
		}

		//4x4
		//soucet
		if (*vyberOperace == 1 && *vyberRozmeru == 4) {
			rozmer4Soucet(a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1,
				a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2,
				&aV, &bV, &cV, &dV, &eV, &fV, &gV, &hV, &iV, &jV, &kV, &lV, &mV, &nV, &oV, &pV);
			printf("Soucet matic A a B o rozmeru 4x4 se rovna:\n\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV, jV, kV, lV, mV, nV, oV, pV);
			fprintf(vystupniSoubor, "\nSoucet matic A a B o rozmeru 4x4 se rovna:\n\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n------------\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV, jV, kV, lV, mV, nV, oV, pV);
		}
		//rozdil
		if (*vyberOperace == 2 && *vyberRozmeru == 4) {
			rozmer4Rozdil(a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1,
				a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2,
				&aV, &bV, &cV, &dV, &eV, &fV, &gV, &hV, &iV, &jV, &kV, &lV, &mV, &nV, &oV, &pV);
			printf("Rozdil matic A a B o rozmeru 4x4 se rovna:\n\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV, jV, kV, lV, mV, nV, oV, pV);
			fprintf(vystupniSoubor, "\nRozdil matic A a B o rozmeru 4x4 se rovna:\n\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n------------\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV, jV, kV, lV, mV, nV, oV, pV);
		}
		//nasobeni matice matici
		if (*vyberOperace == 3 && *vyberRozmeru == 4) {
			rozmer4NasobeniMatici(a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1,
				a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2,
				&aV, &bV, &cV, &dV, &eV, &fV, &gV, &hV, &iV, &jV, &kV, &lV, &mV, &nV, &oV, &pV);
			printf("Soucin matic A a B o rozmeru 4x4 se rovna:\n\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV, jV, kV, lV, mV, nV, oV, pV);
			fprintf(vystupniSoubor, "\nSoucin matic A a B o rozmeru 4x4 se rovna:\n\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n------------\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV, jV, kV, lV, mV, nV, oV, pV);
		}
		//nasobeni matice matici
		if (*vyberOperace == 4 && *vyberRozmeru == 4) {
			rozmer4NasobeniSkalarem(a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1, *skalar,
				&aV, &bV, &cV, &dV, &eV, &fV, &gV, &hV, &iV, &jV, &kV, &lV, &mV, &nV, &oV, &pV);
			printf("Soucin matice A o rozmeru 4x4 a skalaru se rovna:\n\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV, jV, kV, lV, mV, nV, oV, pV);
			fprintf(vystupniSoubor, "\nSoucin matice A o rozmeru 4x4 a skalaru se rovna:\n\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n------------\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV, jV, kV, lV, mV, nV, oV, pV);
		}
		//determinant
		int aDeterminant, eDeterminant, iDeterminant, mDeterminant;
		if (*vyberOperace == 5 && *vyberRozmeru == 4) {
			rozmer3Determinant(f1, g1, h1, j1, k1, l1, n1, o1, p1, &aDeterminant);
			rozmer3Determinant(b1, c1, d1, j1, k1, l1, n1, o1, p1, &eDeterminant);
			rozmer3Determinant(b1, c1, d1, f1, g1, h1, n1, o1, p1, &iDeterminant);
			rozmer3Determinant(b1, c1, d1, f1, g1, h1, j1, k1, l1, &mDeterminant);

			rozmer4Determinant(a1, e1, i1, m1, &determinant, aDeterminant, eDeterminant, iDeterminant, mDeterminant);

			printf("Determinant matice A se rovna:\n\n%d\n", determinant);
			fprintf(vystupniSoubor, "\nDeterminant matice A se rovna:\n\n%d\n------------\n", determinant);
		}
		//transponovana
		if (*vyberOperace == 6 && *vyberRozmeru == 4) {
			rozmer4Transponovana(a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1,
				&aV, &bV, &cV, &dV, &eV, &fV, &gV, &hV, &iV, &jV, &kV, &lV, &mV, &nV, &oV, &pV);
			printf("Transponovana matice A o rozmeru 4x4 a skalaru se rovna:\n\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV, jV, kV, lV, mV, nV, oV, pV);
			fprintf(vystupniSoubor, "\nTransponovana matice A o rozmeru 4x4 a skalaru se rovna:\n\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n------------\n",
				aV, bV, cV, dV, eV, fV, gV, hV, iV, jV, kV, lV, mV, nV, oV, pV);
		}
		fclose(vystupniSoubor);
	}
	
	
	
	int akce;
	printf("\n\n\nspustit maticovou kalkulacku: s		");
	printf("historie vypoctu: h		\n");
	printf("smazat historii vypoctu: d		");
	printf("ukoncit: u		\n\n\n");
	scanf("%d", &akce);

}
void historie() {
	FILE* vstupniSoubor;
	char ch;
	if (access(filename, F_OK) == 0) {
		fopen_s(&vstupniSoubor, filename, "r");
		const size_t line_size = 300;
		char* line = (char*)malloc(line_size);
		while (fgets(line, line_size, vstupniSoubor) != NULL) {
			printf("%s", line);
		}
		free(line);

		fclose(vstupniSoubor);
	}
	else {
		printf("Historie jeste neni k dispozici.");
	}

	char akce;

	printf("\n\n\nPro pokracovani zadej p.\n\n");

	do
	{
		scanf("%c", &akce);
	} while (akce != 'p');
}

void smazat() {

	remove(filename);

}
	

int main(){
	
	
	DWORD size = GetModuleFileNameA(NULL, filename, MAX_PATH);
	if (size)
		cout << "EXE file name is: " << filename << "\n";
	else
		cout << "Could not fine EXE file name.\n";
	strcat(filename, ".txt");

	char  akce;
	char vyberRozmeru[VYBER_ROZMERU];

	do
	{
		system("cls");
		printf("spustit maticovou kalkulacku: s		");
		printf("historie vypoctu: h		\n");
		printf("smazat historii vypoctu: d		");
		printf("ukoncit: u		\n\n\n");

		scanf("%c", &akce);
		printf("\n");
		switch (akce) {
		case 's':
			work();
			break;
		case 'h':
			historie();
			break;
		case 'd':
			smazat();
			break;
		}
	}
	while (akce != 'u');

	return 0;

}