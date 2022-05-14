#include <string>

int iFactorial (int iNumInput) {

    iFactResult = 1;

    for (int iNum = iInput; iNum > 0; iNum--) {

        iFactResult *= iNum;

    }

    return iFactResult;

}

int iCalculateCombinations (int iTotalItems, int iNumOfItemsSelected) {

    int iCalculatedCombNum = iFactorial(iTotalItems);
    int iCalculatedCombDen = iFactorial(iTotalItems - iNumOfItemsSelected) * iFactorial(iNumOfItemsSelected);

    return iCalculatedCombNum / iCalculateddCombDen;

}

int iCalculatePermutations (int iTotalItems, int iNumOfItemsSelected) {

    int iCalculatedCombNum = iFactorial(iTotalItems);
    int iCalculatedCombDen = iFactorial(iTotalItems - iNumOfItemsSelected);

    return iCalculatedCombNum / iCalculateddCombDen;

}

double iQuadSolPos (double iA, double iB, double iC) {

    return (- iB + pow(pow(iB, 2) - 4 * iA * iC, 1/2)) / (2 * iA);

}

double iQuadSolNeg (double iA, double iB, double iC) {

    return (- iB - pow(pow(iB, 2) - 4 * iA * iC, 1/2)) / (2 * iA);

}

double iArrQuadraticSolution[2] (double iA, double iB, double iC){

    iDiscr = pow(iB, 2) - 4 * iA * iC;

    if iDiscr < 0 {



    }

    return {iArrQuadSolPos(iA, iB, iC), iArrQuadSolNeg(iA, iB, iC)};

}

double iReciprocal(double iNum) {

    return 1 / iNum;
}

double iPolynomial(double iVar, int iHighestPower) {

    double iResult = 0;

    if (iHighestPower < 1) {

        cout << "Not a polynomial!";
        exit(0)
    }

    bool bEnterArray;

    for (int iDegree = iHighestPower; iDegree > 0, iDegree--) {

        double iCoefficient;

        cout << "Enter coefficient for the polynomial with the power of " << iDegree << ":";
        cin >> iCoefficient;

        iResult += iCoefficient * pow(iVar, iDegree);

    }

    return iResult;

}

double iDeterminant22 (double iX1, double iX2, double iY1, double iY2) {
    
    return iX1 * iY2 - iX2 * iY1;

}

double iArrCrossProduct(double iI1, double iJ1, double iK1, double iI2, double iJ2, double iJ3)[3] {

    double iDeterminantI = iDeterminant22(iJ1, iJ2, iK1, iK2);
    double iDeterminantJ = iDeterminant22(iI1, iI2, iK1, iK2);
    double iDeterminantK = iDeterminant22(iI1, iI2, iJ1, iJ2);

    return {iDeterminantI, iDeterminantJ, iDeterminantK};

}

double iDotProduct(double iI1, double iJ1, double iK1, double iI2, double iJ2, double iJ3) {

    return iI1 * iI2 + iJ1 * iJ2 + iK1 * iK2;

}

bool bIsPrime (int iNum) {

   !bEvenNumberTest(iNum);
   int iMidPoint = round(iNum / 2);

    for (int iDivisor = 3; iDivisor < iMidPoint; iDivisor +=2) {

        if (iNum % iDivisor = 0) {

            return false;

        }

    }

    return true;

}

bool bEvenNumberTest(int iNum) {

    if (iNum % 2 = 0) {

        return true;

    }


}

bool bIsLessThan(int iNum, int iNum2) {

    return (iNum < iNum2);

}