#include "SequentialMultiplier.h"

int **SequentialMultiplier::doMultiply(unsigned int rows, unsigned int columns, unsigned int n, int **m1, int **m2, bool m2Transposed) {
    int **resultMatrix = new int *[rows];
    for (int rowIdx = 0; rowIdx < rows; ++rowIdx) {
        resultMatrix[rowIdx] = computeRow(rowIdx, columns, n, m1, m2, m2Transposed);
    }
    return resultMatrix;
}
