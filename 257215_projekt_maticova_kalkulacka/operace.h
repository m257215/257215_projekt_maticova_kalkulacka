#pragma once

#define VYBER_ROZMERU 21
#define VYBER_OPERACE 21
#define SKALAR 21

struct vyber {
	int rozmer[VYBER_ROZMERU];
	int operace[VYBER_OPERACE];
	int skalar[VYBER_OPERACE];
};


//funkce pro rozmer matice 2x2
int rozmer2Soucet(int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int aMaticeB, int bMaticeB, int cMaticeB,
	int dMaticeB, int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek);

int rozmer2Rozdil(int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int aMaticeB, int bMaticeB, int cMaticeB,
	int dMaticeB, int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek);

int rozmer2NasobeniMatici(int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int aMaticeB, int bMaticeB,
	int cMaticeB, int dMaticeB, int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek);

int rozmer2NasobeniSkalarem(int aMatice, int bMatice, int cMatice, int dMatice, int skalar,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek);

int rozmer2Determinant(int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int* determinantVysledek);

int rozmer2Transponovana(int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int* aTransp, int* bTransp, int* cTransp, int* dTransp);

//funkce pro rozmer matice 3x3
int rozmer3Soucet(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA, int iMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int eMaticeB, int fMaticeB, int gMaticeB, int hMaticeB, int iMaticeB,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek);
int rozmer3Rozdil(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA, int iMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int eMaticeB, int fMaticeB, int gMaticeB, int hMaticeB, int iMaticeB,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek);
int rozmer3NasobeniMatici(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA, int iMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int eMaticeB, int fMaticeB, int gMaticeB, int hMaticeB, int iMaticeB,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek);
int rozmer3NasobeniSkalarem(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA, int iMaticeA, int skalar,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek);
int rozmer3Determinant(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA, int iMaticeA, int* determinant);
int rozmer3Transponovana(int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA, int iMaticeA,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek);

//funkce pro rozmer matice 3x3
int rozmer4Soucet(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA,
	int iMaticeA, int jMaticeA, int kMaticeA, int lMaticeA, int mMaticeA, int nMaticeA, int oMaticeA, int pMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int eMaticeB, int fMaticeB, int gMaticeB, int hMaticeB,
	int iMaticeB, int jMaticeB, int kMaticeB, int lMaticeB, int mMaticeB, int nMaticeB, int oMaticeB, int pMaticeB,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek, int* jVysledek, int* kVysledek, int* lVysledek, int* mVysledek, int* nVysledek, int* oVysledek, int* pVysledek);
int rozmer4Rozdil(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA,
	int iMaticeA, int jMaticeA, int kMaticeA, int lMaticeA, int mMaticeA, int nMaticeA, int oMaticeA, int pMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int eMaticeB, int fMaticeB, int gMaticeB, int hMaticeB,
	int iMaticeB, int jMaticeB, int kMaticeB, int lMaticeB, int mMaticeB, int nMaticeB, int oMaticeB, int pMaticeB,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek, int* jVysledek, int* kVysledek, int* lVysledek, int* mVysledek, int* nVysledek, int* oVysledek, int* pVysledek);
int rozmer4NasobeniMatici(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA,
	int iMaticeA, int jMaticeA, int kMaticeA, int lMaticeA, int mMaticeA, int nMaticeA, int oMaticeA, int pMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int eMaticeB, int fMaticeB, int gMaticeB, int hMaticeB,
	int iMaticeB, int jMaticeB, int kMaticeB, int lMaticeB, int mMaticeB, int nMaticeB, int oMaticeB, int pMaticeB,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek, int* jVysledek, int* kVysledek, int* lVysledek, int* mVysledek, int* nVysledek, int* oVysledek, int* pVysledek);
int rozmer4NasobeniSkalarem(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA,
	int iMaticeA, int jMaticeA, int kMaticeA, int lMaticeA, int mMaticeA, int nMaticeA, int oMaticeA, int pMaticeA,
	int skalar,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek, int* jVysledek, int* kVysledek, int* lVysledek, int* mVysledek, int* nVysledek, int* oVysledek, int* pVysledek);
int rozmer4Determinant(
	int aMaticeA, int eMaticeA, int iMaticeA, int mMaticeA, int* determinant,
	int aDeterminant, int eDeterminant, int iDeterminant, int mDeterminant);
int rozmer4Transponovana(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA,
	int iMaticeA, int jMaticeA, int kMaticeA, int lMaticeA, int mMaticeA, int nMaticeA, int oMaticeA, int pMaticeA,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek, int* jVysledek, int* kVysledek, int* lVysledek, int* mVysledek, int* nVysledek, int* oVysledek, int* pVysledek);
int rozmer5Soucet(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA,
	int iMaticeA, int jMaticeA, int kMaticeA, int lMaticeA, int mMaticeA, int nMaticeA, int oMaticeA, int pMaticeA,
	int qMaticeA, int rMaticeA, int sMaticeA, int tMaticeA, int uMaticeA, int vMaticeA, int wMaticeA, int xMaticeA, int yMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int eMaticeB, int fMaticeB, int gMaticeB, int hMaticeB,
	int iMaticeB, int jMaticeB, int kMaticeB, int lMaticeB, int mMaticeB, int nMaticeB, int oMaticeB, int pMaticeB,
	int qMaticeB, int rMaticeB, int sMaticeB, int tMaticeB, int uMaticeB, int vMaticeB, int wMaticeB, int xMaticeB, int yMaticeB,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek, int* jVysledek, int* kVysledek, int* lVysledek, int* mVysledek, int* nVysledek, int* oVysledek, int* pVysledek,
	int* qVysledek, int* rVysledek, int* sVysledek, int* tVysledek, int* uVysledek, int* vVysledek, int* wVysledek, int* xVysledek,
	int *yVysledek);
int rozmer5Rozdil(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA,
	int iMaticeA, int jMaticeA, int kMaticeA, int lMaticeA, int mMaticeA, int nMaticeA, int oMaticeA, int pMaticeA,
	int qMaticeA, int rMaticeA, int sMaticeA, int tMaticeA, int uMaticeA, int vMaticeA, int wMaticeA, int xMaticeA, int yMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int eMaticeB, int fMaticeB, int gMaticeB, int hMaticeB,
	int iMaticeB, int jMaticeB, int kMaticeB, int lMaticeB, int mMaticeB, int nMaticeB, int oMaticeB, int pMaticeB,
	int qMaticeB, int rMaticeB, int sMaticeB, int tMaticeB, int uMaticeB, int vMaticeB, int wMaticeB, int xMaticeB, int yMaticeB,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek, int* jVysledek, int* kVysledek, int* lVysledek, int* mVysledek, int* nVysledek, int* oVysledek, int* pVysledek,
	int* qVysledek, int* rVysledek, int* sVysledek, int* tVysledek, int* uVysledek, int* vVysledek, int* wVysledek, int* xVysledek,
	int* yVysledek);
