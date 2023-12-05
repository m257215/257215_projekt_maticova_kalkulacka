
#include "operace.h".
#include<math.h>


//operace pro rozmer matice 2x2
int rozmer2Soucet(int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek) {
	*aVysledek = aMaticeA + aMaticeB;
	*bVysledek = bMaticeA + bMaticeB;
	*cVysledek = cMaticeA + cMaticeB;
	*dVysledek = dMaticeA + dMaticeB;

	return 0;
}
int rozmer2Rozdil(int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek) {
	*aVysledek = aMaticeA - aMaticeB;
	*bVysledek = bMaticeA - bMaticeB;
	*cVysledek = cMaticeA - cMaticeB;
	*dVysledek = dMaticeA - dMaticeB;

	return 0;
}
int rozmer2NasobeniMatici(int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek) {
	*aVysledek = (aMaticeA * aMaticeB) + (bMaticeA * cMaticeB);
	*bVysledek = (aMaticeA * bMaticeB) + (bMaticeA * dMaticeB);
	*cVysledek = (cMaticeA * aMaticeB) + (dMaticeA * cMaticeB);
	*dVysledek = (cMaticeA * bMaticeB) + (dMaticeA * dMaticeB);
	return 0;
}
int rozmer2NasobeniSkalarem(int aMatice, int bMatice, int cMatice, int dMatice,
	int skalar, int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek) {
	*aVysledek = aMatice * skalar;
	*bVysledek = bMatice * skalar;
	*cVysledek = cMatice * skalar;
	*dVysledek = dMatice * skalar;

	return 0;
}
int rozmer2Determinant(int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int* determinantVysledek) {
	*determinantVysledek = (aMaticeA * dMaticeA) - (bMaticeA * cMaticeA);

	return 0;
}
int rozmer2Transponovana(int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int* aTransp, int* bTransp, int* cTransp, int* dTransp) {
	*aTransp = aMaticeA;
	*bTransp = cMaticeA;
	*cTransp = bMaticeA;
	*dTransp = dMaticeA;

	return 0;
}
//operace pro rozmer matice 3x3
int rozmer3Soucet(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA, int iMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int eMaticeB, int fMaticeB, int gMaticeB, int hMaticeB, int iMaticeB,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek) {
	*aVysledek = aMaticeA + aMaticeB;
	*bVysledek = bMaticeA + bMaticeB;
	*cVysledek = cMaticeA + cMaticeB;
	*dVysledek = dMaticeA + dMaticeB;
	*eVysledek = eMaticeA + eMaticeB;
	*fVysledek = fMaticeA + fMaticeB;
	*gVysledek = gMaticeA + gMaticeB;
	*hVysledek = hMaticeA + hMaticeB;
	*iVysledek = iMaticeA + iMaticeB;

	return 0;
}
int rozmer3Rozdil(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA, int iMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int eMaticeB, int fMaticeB, int gMaticeB, int hMaticeB, int iMaticeB,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek) {
	*aVysledek = aMaticeA - aMaticeB;
	*bVysledek = bMaticeA - bMaticeB;
	*cVysledek = cMaticeA - cMaticeB;
	*dVysledek = dMaticeA - dMaticeB;
	*eVysledek = eMaticeA - eMaticeB;
	*fVysledek = fMaticeA - fMaticeB;
	*gVysledek = gMaticeA - gMaticeB;
	*hVysledek = hMaticeA - hMaticeB;
	*iVysledek = iMaticeA - iMaticeB;

	return 0;
}
int rozmer3NasobeniMatici(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA, int iMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int eMaticeB, int fMaticeB, int gMaticeB, int hMaticeB, int iMaticeB,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek) {
	*aVysledek = aMaticeA * aMaticeB + bMaticeA * dMaticeB + cMaticeA * gMaticeB;
	*bVysledek = aMaticeA * bMaticeB + bMaticeA * eMaticeB + cMaticeA * hMaticeB;
	*cVysledek = aMaticeA * cMaticeB + bMaticeA * fMaticeB + cMaticeA * iMaticeB;
	*dVysledek = dMaticeA * aMaticeB + eMaticeA * dMaticeB + fMaticeA * gMaticeB;
	*eVysledek = dMaticeA * bMaticeB + eMaticeA * eMaticeB + fMaticeA * hMaticeB;
	*fVysledek = dMaticeA * cMaticeB + eMaticeA * fMaticeB + fMaticeA * iMaticeB;
	*gVysledek = gMaticeA * aMaticeB + hMaticeA * dMaticeB + iMaticeA * gMaticeB;
	*hVysledek = gMaticeA * bMaticeB + hMaticeA * eMaticeB + iMaticeA * hMaticeB;
	*iVysledek = gMaticeA * cMaticeB + hMaticeA * fMaticeB + iMaticeA * iMaticeB;

		return 0;
}
int rozmer3NasobeniSkalarem(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA, int iMaticeA, int skalar,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek) {
	*aVysledek = aMaticeA * skalar;
	*bVysledek = bMaticeA * skalar;
	*cVysledek = cMaticeA * skalar;
	*dVysledek = dMaticeA * skalar;
	*eVysledek = eMaticeA * skalar;
	*fVysledek = fMaticeA * skalar;
	*gVysledek = gMaticeA * skalar;
	*hVysledek = hMaticeA * skalar;
	*iVysledek = iMaticeA * skalar;

	return 0;
}
int rozmer3Determinant(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA, int iMaticeA, int* determinant) {
	*determinant = aMaticeA * eMaticeA * iMaticeA + bMaticeA * fMaticeA * gMaticeA + cMaticeA * dMaticeA * hMaticeA
		- cMaticeA * eMaticeA * gMaticeA - bMaticeA * dMaticeA * iMaticeA - aMaticeA * fMaticeA * hMaticeA;

	return 0;
}
int rozmer3Transponovana(int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA, int iMaticeA,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek) {
	*aVysledek = aMaticeA;
	*bVysledek = dMaticeA;
	*cVysledek = gMaticeA;
	*dVysledek = bMaticeA;
	*eVysledek = eMaticeA;
	*fVysledek = hMaticeA;
	*gVysledek = cMaticeA;
	*hVysledek = fMaticeA;
	*iVysledek = iMaticeA;

	return 0;
}

//4x4
int rozmer4Soucet(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA,
	int iMaticeA, int jMaticeA, int kMaticeA, int lMaticeA, int mMaticeA, int nMaticeA, int oMaticeA, int pMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int eMaticeB, int fMaticeB, int gMaticeB, int hMaticeB,
	int iMaticeB, int jMaticeB, int kMaticeB, int lMaticeB, int mMaticeB, int nMaticeB, int oMaticeB, int pMaticeB,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek, int* jVysledek, int* kVysledek, int* lVysledek, int* mVysledek, int* nVysledek, int* oVysledek, int* pVysledek) {
	*aVysledek = aMaticeA + aMaticeB;
	*bVysledek = bMaticeA + bMaticeB;
	*cVysledek = cMaticeA + cMaticeB;
	*dVysledek = dMaticeA + dMaticeB;
	*eVysledek = eMaticeA + eMaticeB;
	*fVysledek = fMaticeA + fMaticeB;
	*gVysledek = gMaticeA + gMaticeB;
	*hVysledek = hMaticeA + hMaticeB;
	*iVysledek = iMaticeA + iMaticeB;
	*jVysledek = jMaticeA + jMaticeB;
	*kVysledek = kMaticeA + kMaticeB;
	*lVysledek = lMaticeA + lMaticeB;
	*mVysledek = mMaticeA + mMaticeB;
	*nVysledek = nMaticeA + nMaticeB;
	*oVysledek = oMaticeA + oMaticeB;
	*pVysledek = pMaticeA + pMaticeB;
	
	return 0;
}
int rozmer4Rozdil(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA,
	int iMaticeA, int jMaticeA, int kMaticeA, int lMaticeA, int mMaticeA, int nMaticeA, int oMaticeA, int pMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int eMaticeB, int fMaticeB, int gMaticeB, int hMaticeB,
	int iMaticeB, int jMaticeB, int kMaticeB, int lMaticeB, int mMaticeB, int nMaticeB, int oMaticeB, int pMaticeB,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek, int* jVysledek, int* kVysledek, int* lVysledek, int* mVysledek, int* nVysledek, int* oVysledek, int* pVysledek) {
	*aVysledek = aMaticeA - aMaticeB;
	*bVysledek = bMaticeA - bMaticeB;
	*cVysledek = cMaticeA - cMaticeB;
	*dVysledek = dMaticeA - dMaticeB;
	*eVysledek = eMaticeA - eMaticeB;
	*fVysledek = fMaticeA - fMaticeB;
	*gVysledek = gMaticeA - gMaticeB;
	*hVysledek = hMaticeA - hMaticeB;
	*iVysledek = iMaticeA - iMaticeB;
	*jVysledek = jMaticeA - jMaticeB;
	*kVysledek = kMaticeA - kMaticeB;
	*lVysledek = lMaticeA - lMaticeB;
	*mVysledek = mMaticeA - mMaticeB;
	*nVysledek = nMaticeA - nMaticeB;
	*oVysledek = oMaticeA - oMaticeB;
	*pVysledek = pMaticeA - pMaticeB;

	return 0;
}
int rozmer4NasobeniMatici(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA,
	int iMaticeA, int jMaticeA, int kMaticeA, int lMaticeA, int mMaticeA, int nMaticeA, int oMaticeA, int pMaticeA,
	int aMaticeB, int bMaticeB, int cMaticeB, int dMaticeB, int eMaticeB, int fMaticeB, int gMaticeB, int hMaticeB,
	int iMaticeB, int jMaticeB, int kMaticeB, int lMaticeB, int mMaticeB, int nMaticeB, int oMaticeB, int pMaticeB,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek, int* jVysledek, int* kVysledek, int* lVysledek, int* mVysledek, int* nVysledek, int* oVysledek, int* pVysledek) {
	*aVysledek = aMaticeA * aMaticeB + bMaticeA * eMaticeB + cMaticeA * iMaticeB + dMaticeA * mMaticeB;
	*bVysledek = aMaticeA * bMaticeB + bMaticeA * fMaticeB + cMaticeA * jMaticeB + dMaticeA * nMaticeB;
	*cVysledek = aMaticeA * cMaticeB + bMaticeA * gMaticeB + cMaticeA * kMaticeB + dMaticeA * oMaticeB;
	*dVysledek = aMaticeA * dMaticeB + bMaticeA * hMaticeB + cMaticeA * lMaticeB + dMaticeA * pMaticeB;
	*eVysledek = eMaticeA * aMaticeB + fMaticeA * eMaticeB + gMaticeA * iMaticeB + hMaticeA * mMaticeB;
	*fVysledek = eMaticeA * bMaticeB + fMaticeA * fMaticeB + gMaticeA * jMaticeB + hMaticeA * nMaticeB;
	*gVysledek = eMaticeA * cMaticeB + fMaticeA * gMaticeB + gMaticeA * kMaticeB + hMaticeA * oMaticeB;
	*hVysledek = eMaticeA * dMaticeB + fMaticeA * hMaticeB + gMaticeA * lMaticeB + hMaticeA * pMaticeB;
	*iVysledek = iMaticeA * aMaticeB + jMaticeA * eMaticeB + kMaticeA * iMaticeB + lMaticeA * mMaticeB;
	*jVysledek = iMaticeA * bMaticeB + jMaticeA * fMaticeB + kMaticeA * jMaticeB + lMaticeA * nMaticeB;
	*kVysledek = iMaticeA * cMaticeB + jMaticeA * gMaticeB + kMaticeA * kMaticeB + lMaticeA * oMaticeB;
	*lVysledek = iMaticeA * dMaticeB + jMaticeA * hMaticeB + kMaticeA * lMaticeB + lMaticeA * pMaticeB;
	*mVysledek = mMaticeA * aMaticeB + nMaticeA * eMaticeB + oMaticeA * iMaticeB + pMaticeA * mMaticeB;
	*nVysledek = mMaticeA * bMaticeB + nMaticeA * fMaticeB + oMaticeA * jMaticeB + pMaticeA * nMaticeB;
	*oVysledek = mMaticeA * cMaticeB + nMaticeA * gMaticeB + oMaticeA * kMaticeB + pMaticeA * oMaticeB;
	*pVysledek = mMaticeA * dMaticeB + nMaticeA * hMaticeB + oMaticeA * lMaticeB + pMaticeA * pMaticeB;

	return 0;
}
int rozmer4NasobeniSkalarem(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA,
	int iMaticeA, int jMaticeA, int kMaticeA, int lMaticeA, int mMaticeA, int nMaticeA, int oMaticeA, int pMaticeA,
	int skalar,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek, int* jVysledek, int* kVysledek, int* lVysledek, int* mVysledek, int* nVysledek, int* oVysledek, int* pVysledek) {

	*aVysledek = aMaticeA * skalar;
	*bVysledek = bMaticeA * skalar;
	*cVysledek = cMaticeA * skalar;
	*dVysledek = dMaticeA * skalar;
	*eVysledek = eMaticeA * skalar;
	*fVysledek = fMaticeA * skalar;
	*gVysledek = gMaticeA * skalar;
	*hVysledek = hMaticeA * skalar;
	*iVysledek = iMaticeA * skalar;
	*jVysledek = jMaticeA * skalar;
	*kVysledek = kMaticeA * skalar;
	*lVysledek = lMaticeA * skalar;
	*mVysledek = mMaticeA * skalar;
	*nVysledek = nMaticeA * skalar;
	*oVysledek = oMaticeA * skalar;
	*pVysledek = pMaticeA * skalar;

	return 0;
}
int rozmer4Determinant(
	int aMaticeA, int eMaticeA, int iMaticeA, int mMaticeA, int* determinant,
	int aDeterminant, int eDeterminant, int iDeterminant, int mDeterminant) {
	*determinant = aMaticeA * pow(-1, 2) * aDeterminant + eMaticeA * pow(-1, 3) * eDeterminant
		+ iMaticeA * pow(-1, 4) * iDeterminant + mMaticeA * pow(-1, 5) * mDeterminant;
	return 0;
}
int rozmer4Transponovana(
	int aMaticeA, int bMaticeA, int cMaticeA, int dMaticeA, int eMaticeA, int fMaticeA, int gMaticeA, int hMaticeA,
	int iMaticeA, int jMaticeA, int kMaticeA, int lMaticeA, int mMaticeA, int nMaticeA, int oMaticeA, int pMaticeA,
	int* aVysledek, int* bVysledek, int* cVysledek, int* dVysledek, int* eVysledek, int* fVysledek, int* gVysledek, int* hVysledek,
	int* iVysledek, int* jVysledek, int* kVysledek, int* lVysledek, int* mVysledek, int* nVysledek, int* oVysledek, int* pVysledek) {
	*aVysledek = aMaticeA;
	*bVysledek = eMaticeA;
	*cVysledek = iMaticeA;
	*dVysledek = mMaticeA;
	*eVysledek = bMaticeA;
	*fVysledek = fMaticeA;
	*gVysledek = jMaticeA;
	*hVysledek = nMaticeA;
	*iVysledek = cMaticeA;
	*jVysledek = gMaticeA;
	*kVysledek = kMaticeA;
	*lVysledek = oMaticeA;
	*mVysledek = dMaticeA;
	*nVysledek = hMaticeA;
	*oVysledek = lMaticeA;
	*pVysledek = pMaticeA;

	return 0;
}

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
	int* yVysledek) {
	*aVysledek = aMaticeA + aMaticeB;
	*bVysledek = bMaticeA + bMaticeB;
	*cVysledek = cMaticeA + cMaticeB;
	*dVysledek = dMaticeA + dMaticeB;
	*eVysledek = eMaticeA + eMaticeB;
	*fVysledek = fMaticeA + fMaticeB;
	*gVysledek = gMaticeA + gMaticeB;
	*hVysledek = hMaticeA + hMaticeB;
	*iVysledek = iMaticeA + iMaticeB;
	*jVysledek = jMaticeA + jMaticeB;
	*kVysledek = kMaticeA + kMaticeB;
	*lVysledek = lMaticeA + lMaticeB;
	*mVysledek = mMaticeA + mMaticeB;
	*nVysledek = nMaticeA + nMaticeB;
	*oVysledek = oMaticeA + oMaticeB;
	*pVysledek = pMaticeA + pMaticeB;
	*qVysledek = qMaticeA + qMaticeB;
	*rVysledek = rMaticeA + rMaticeB;
	*sVysledek = sMaticeA + sMaticeB;
	*tVysledek = tMaticeA + tMaticeB;
	*uVysledek = uMaticeA + uMaticeB;
	*vVysledek = vMaticeA + vMaticeB;
	*wVysledek = wMaticeA + wMaticeB;
	*xVysledek = xMaticeA + xMaticeB;
	*yVysledek = yMaticeA + yMaticeB;

	return 0;
}
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
	int* yVysledek) {
	*aVysledek = aMaticeA - aMaticeB;
	*bVysledek = bMaticeA - bMaticeB;
	*cVysledek = cMaticeA - cMaticeB;
	*dVysledek = dMaticeA - dMaticeB;
	*eVysledek = eMaticeA - eMaticeB;
	*fVysledek = fMaticeA - fMaticeB;
	*gVysledek = gMaticeA - gMaticeB;
	*hVysledek = hMaticeA - hMaticeB;
	*iVysledek = iMaticeA - iMaticeB;
	*jVysledek = jMaticeA - jMaticeB;
	*kVysledek = kMaticeA - kMaticeB;
	*lVysledek = lMaticeA - lMaticeB;
	*mVysledek = mMaticeA - mMaticeB;
	*nVysledek = nMaticeA - nMaticeB;
	*oVysledek = oMaticeA - oMaticeB;
	*pVysledek = pMaticeA - pMaticeB;
	*qVysledek = qMaticeA - qMaticeB;
	*rVysledek = rMaticeA - rMaticeB;
	*sVysledek = sMaticeA - sMaticeB;
	*tVysledek = tMaticeA - tMaticeB;
	*uVysledek = uMaticeA - uMaticeB;
	*vVysledek = vMaticeA - vMaticeB;
	*wVysledek = wMaticeA - wMaticeB;
	*xVysledek = xMaticeA - xMaticeB;
	*yVysledek = yMaticeA - yMaticeB;

	return 0;
}

