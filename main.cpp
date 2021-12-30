#include "gtest/gtest.h"
#include "linearalgebra.h"

TEST(TransposeTest, InvalidMatrix) { //return original matrix
	
	//[1 2 3, 4 5]
	vector<int> row1{1, 2, 3};
	vector<int> row2{4, 5};
	
	vector<vector<int>> matrix;
	matrix.push_back(row1);
	matrix.push_back(row2);
	
	vector<vector<int>> transpose_matrix = transpose(matrix);
	
	EXPECT_EQ(transpose_matrix.at(0).at(0), 1);
	EXPECT_EQ(transpose_matrix.at(0).at(1), 2);
	EXPECT_EQ(transpose_matrix.at(0).at(2), 3);
	EXPECT_EQ(transpose_matrix.at(1).at(0), 4);
	EXPECT_EQ(transpose_matrix.at(1).at(1), 5);
	
}

TEST(TransposeTest, InvalidMatrix2) { //return original matrix
	
	//[1 2 3, 4 5, 6 7]
	vector<int> row1{1, 2, 3};
	vector<int> row2{4, 5};
	vector<int> row3{6, 7};
	
	vector<vector<int>> matrix;
	matrix.push_back(row1);
	matrix.push_back(row2);
	matrix.push_back(row3);
	
	vector<vector<int>> transpose_matrix = transpose(matrix);
	
	EXPECT_EQ(transpose_matrix.at(0).at(0), 1);
	EXPECT_EQ(transpose_matrix.at(0).at(1), 2);
	EXPECT_EQ(transpose_matrix.at(0).at(2), 3);
	EXPECT_EQ(transpose_matrix.at(1).at(0), 4);
	EXPECT_EQ(transpose_matrix.at(1).at(1), 5);
	EXPECT_EQ(transpose_matrix.at(2).at(0), 6);
	EXPECT_EQ(transpose_matrix.at(2).at(1), 7);
}

TEST(TransposeTest, NoMatrix) {
		
	//[ ]
		
	vector<vector<int>> matrix;
	vector<vector<int>> transpose_matrix = transpose(matrix);
	
	EXPECT_TRUE(transpose_matrix.empty());
	
}

TEST(TransposeTest, OnebyThreeMatrix) {
	
	//[1 2 3]
	vector<int> row1{1, 2, 3};
	
	vector<vector<int>> matrix;
	matrix.push_back(row1);
	
	vector<vector<int>> transpose_matrix = transpose(matrix);
	
	EXPECT_EQ(transpose_matrix.at(0).at(0), 1);
	EXPECT_EQ(transpose_matrix.at(1).at(0), 2);
	EXPECT_EQ(transpose_matrix.at(2).at(0), 3);
	
}


TEST(TransposeTest, TwobyThreeMatrix) {
	
	//[1 2 3, 4 5 6]
	vector<int> row1{1, 2, 3};
	vector<int> row2{4, 5, 6};
	
	vector<vector<int>> matrix;
	matrix.push_back(row1);
	matrix.push_back(row2);
	
	vector<vector<int>> transpose_matrix = transpose(matrix);
	
	EXPECT_EQ(transpose_matrix.at(0).at(0), 1);
	EXPECT_EQ(transpose_matrix.at(1).at(0), 2);
	EXPECT_EQ(transpose_matrix.at(2).at(0), 3);
	EXPECT_EQ(transpose_matrix.at(0).at(1), 4);
	EXPECT_EQ(transpose_matrix.at(1).at(1), 5);
	EXPECT_EQ(transpose_matrix.at(2).at(1), 6);
	
}


TEST(TransposeTest, ThreebyThreeMatrix) {
	
	//[1 2 3, 4 5 6, 7 8 9]
	vector<int> row1{1, 2, 3};
	vector<int> row2{4, 5, 6};
	vector<int> row3{7, 8, 9};
	
	vector<vector<int>> matrix;
	matrix.push_back(row1);
	matrix.push_back(row2);
	matrix.push_back(row3);
	
	vector<vector<int>> transpose_matrix = transpose(matrix);
	
	EXPECT_EQ(transpose_matrix.at(0).at(0), 1);
	EXPECT_EQ(transpose_matrix.at(1).at(0), 2);
	EXPECT_EQ(transpose_matrix.at(2).at(0), 3);
	EXPECT_EQ(transpose_matrix.at(0).at(1), 4);
	EXPECT_EQ(transpose_matrix.at(1).at(1), 5);
	EXPECT_EQ(transpose_matrix.at(2).at(1), 6);
	EXPECT_EQ(transpose_matrix.at(0).at(2), 7);
	EXPECT_EQ(transpose_matrix.at(1).at(2), 8);
	EXPECT_EQ(transpose_matrix.at(2).at(2), 9);
	
}

TEST(TransposeTest, ThreebyOneMatrix) {
	
	//[1, 2, 3]
	vector<int> row1{1};
	vector<int> row2{2};
	vector<int> row3{3};
	
	vector<vector<int>> matrix;
	matrix.push_back(row1);
	matrix.push_back(row2);
	matrix.push_back(row3);
	
	vector<vector<int>> transpose_matrix = transpose(matrix);
	
	EXPECT_EQ(transpose_matrix.at(0).at(0), 1);
	EXPECT_EQ(transpose_matrix.at(0).at(1), 2);
	EXPECT_EQ(transpose_matrix.at(0).at(2), 3);
	
}

TEST(TransposeTest, TwobyTwoMatrix) {
	
	//[1 2, 3 4]
	vector<int> row1{1, 2};
	vector<int> row2{3, 4};
	
	vector<vector<int>> matrix;
	matrix.push_back(row1);
	matrix.push_back(row2);
	
	vector<vector<int>> transpose_matrix = transpose(matrix);
	
	EXPECT_EQ(transpose_matrix.at(0).at(0), 1);
	EXPECT_EQ(transpose_matrix.at(1).at(0), 2);
	EXPECT_EQ(transpose_matrix.at(0).at(1), 3);
	EXPECT_EQ(transpose_matrix.at(1).at(1), 4);
	
}

TEST(TransposeTest, ThreebyTwoMatrix) {
	
	//[1 2, 3 4, 5 6]
	vector<int> row1{1, 2};
	vector<int> row2{3, 4};
	vector<int> row3{5, 6};
	
	
	vector<vector<int>> matrix;
	matrix.push_back(row1);
	matrix.push_back(row2);
	matrix.push_back(row3);
	
	vector<vector<int>> transpose_matrix = transpose(matrix);
	
	EXPECT_EQ(transpose_matrix.at(0).at(0), 1);
	EXPECT_EQ(transpose_matrix.at(1).at(0), 2);
	EXPECT_EQ(transpose_matrix.at(0).at(1), 3);
	EXPECT_EQ(transpose_matrix.at(1).at(1), 4);
	EXPECT_EQ(transpose_matrix.at(0).at(2), 5);
	EXPECT_EQ(transpose_matrix.at(1).at(2), 6);
	
}

TEST(TransposeTest, ThreebyFourMatrix) {
	
	//[1 2, 3 4, 5 6]
	vector<int> row1{1, -2, 3, 4};
	vector<int> row2{5, 6, -7, 8};
	vector<int> row3{-9, 10, 11, -12};
	
	
	vector<vector<int>> matrix;
	matrix.push_back(row1);
	matrix.push_back(row2);
	matrix.push_back(row3);
	
	vector<vector<int>> transpose_matrix = transpose(matrix);
	
	EXPECT_EQ(transpose_matrix.at(0).at(0), 1);
	EXPECT_EQ(transpose_matrix.at(1).at(0), -2);
	EXPECT_EQ(transpose_matrix.at(2).at(0), 3);
	EXPECT_EQ(transpose_matrix.at(3).at(0), 4);
	EXPECT_EQ(transpose_matrix.at(0).at(1), 5);
	EXPECT_EQ(transpose_matrix.at(1).at(1), 6);
	EXPECT_EQ(transpose_matrix.at(2).at(1), -7);
	EXPECT_EQ(transpose_matrix.at(3).at(1), 8);
	EXPECT_EQ(transpose_matrix.at(0).at(2), -9);
	EXPECT_EQ(transpose_matrix.at(1).at(2), 10);
	EXPECT_EQ(transpose_matrix.at(2).at(2), 11);
	EXPECT_EQ(transpose_matrix.at(3).at(2), -12);
}

TEST(MatrixMultiplicationTest, TwoMatrices) {
	
	//Matrix 1: [1 2 3, 4 5 6]
	vector<int> row1_1{1, 2, 3};
	vector<int> row2_1{4, 5, 6};
	
	vector<vector<int>> matrix1;
	matrix1.push_back(row1_1);
	matrix1.push_back(row2_1);
	
	//Matrix 2: [1, 2, 3]
	vector<int> row1_2{1};
	vector<int> row2_2{2};
	vector<int> row3_2{3};
	
	vector<vector<int>> matrix2;
	matrix2.push_back(row1_2);
	matrix2.push_back(row2_2);
	matrix2.push_back(row3_2);
	
	vector<vector<vector<int>>> multiple_matrices;
	multiple_matrices.push_back(matrix1);
	multiple_matrices.push_back(matrix2);
	
	vector<vector<int>> mult_matrix = matrix_multiplication(multiple_matrices);
	
	EXPECT_EQ(mult_matrix.at(0).at(0), 14);
	EXPECT_EQ(mult_matrix.at(1).at(0), 32);
}

TEST(MatrixMultiplicationTest, TwoNegativeMatrices) {
	
	//Matrix 1: [1 2 3, 4 5 6]
	vector<int> row1_1{1, 2, 3};
	vector<int> row2_1{4, 5, 6};
	
	vector<vector<int>> matrix1;
	matrix1.push_back(row1_1);
	matrix1.push_back(row2_1);
	
	//Matrix 2: [1, 2, 3]
	vector<int> row1_2{-1};
	vector<int> row2_2{-2};
	vector<int> row3_2{-3};
	
	vector<vector<int>> matrix2;
	matrix2.push_back(row1_2);
	matrix2.push_back(row2_2);
	matrix2.push_back(row3_2);
	
	vector<vector<vector<int>>> multiple_matrices;
	multiple_matrices.push_back(matrix1);
	multiple_matrices.push_back(matrix2);
	
	vector<vector<int>> mult_matrix = matrix_multiplication(multiple_matrices);
	
	EXPECT_EQ(mult_matrix.at(0).at(0), -14);
	EXPECT_EQ(mult_matrix.at(1).at(0), -32);
}


TEST(MatrixMultiplicationTest, ThreeMatrices) {
	
	//Matrix 1: [1 2 3, 4 5 6]
	vector<int> row1_1{1, 2, 3};
	vector<int> row2_1{4, 5, 6};
	
	vector<vector<int>> matrix1;
	matrix1.push_back(row1_1);
	matrix1.push_back(row2_1);
	
	//Matrix 2: [1, 2, 3]
	vector<int> row1_2{1};
	vector<int> row2_2{2};
	vector<int> row3_2{3};
	
	vector<vector<int>> matrix2;
	matrix2.push_back(row1_2);
	matrix2.push_back(row2_2);
	matrix2.push_back(row3_2);
	
	//Matrix 3: [1, 2, 3]
	vector<int> row1_3{4, 5, 6};
	
	vector<vector<int>> matrix3;
	matrix3.push_back(row1_3);
	
	vector<vector<vector<int>>> multiple_matrices;
	multiple_matrices.push_back(matrix1);
	multiple_matrices.push_back(matrix2);
	multiple_matrices.push_back(matrix3);
	
	vector<vector<int>> mult_matrix = matrix_multiplication(multiple_matrices);
	
	EXPECT_EQ(mult_matrix.at(0).at(0), 56);
	EXPECT_EQ(mult_matrix.at(0).at(1), 70);
	EXPECT_EQ(mult_matrix.at(0).at(2), 84);
	EXPECT_EQ(mult_matrix.at(1).at(0), 128);
	EXPECT_EQ(mult_matrix.at(1).at(1), 160);
	EXPECT_EQ(mult_matrix.at(1).at(2), 192);
}

TEST(MatrixMultiplicationTest, ThreeNegativeMatrices) {
	
	//Matrix 1: [1 2 3, 4 5 6]
	vector<int> row1_1{1, -2, 3};
	vector<int> row2_1{-4, 5, 6};
	
	vector<vector<int>> matrix1;
	matrix1.push_back(row1_1);
	matrix1.push_back(row2_1);
	
	//Matrix 2: [1, 2, 3]
	vector<int> row1_2{1};
	vector<int> row2_2{2};
	vector<int> row3_2{3};
	
	vector<vector<int>> matrix2;
	matrix2.push_back(row1_2);
	matrix2.push_back(row2_2);
	matrix2.push_back(row3_2);
	
	//Matrix 3: [1, 2, 3]
	vector<int> row1_3{4, -5, 6};
	
	vector<vector<int>> matrix3;
	matrix3.push_back(row1_3);
	
	vector<vector<vector<int>>> multiple_matrices;
	multiple_matrices.push_back(matrix1);
	multiple_matrices.push_back(matrix2);
	multiple_matrices.push_back(matrix3);
	
	vector<vector<int>> mult_matrix = matrix_multiplication(multiple_matrices);
	
	EXPECT_EQ(mult_matrix.at(0).at(0), 24);
	EXPECT_EQ(mult_matrix.at(0).at(1), -30);
	EXPECT_EQ(mult_matrix.at(0).at(2), 36);
	EXPECT_EQ(mult_matrix.at(1).at(0), 96);
	EXPECT_EQ(mult_matrix.at(1).at(1), -120);
	EXPECT_EQ(mult_matrix.at(1).at(2), 144);
}

TEST(MatrixMultiplicationTest, FourMatrices) {
	
	//Matrix 1: [1 2 3, 4 5 6]
	vector<int> row1_1{1, 2, 3};
	vector<int> row2_1{4, 5, 6};
	
	vector<vector<int>> matrix1;
	matrix1.push_back(row1_1);
	matrix1.push_back(row2_1);
	
	//Matrix 2: [1, 2, 3]
	vector<int> row1_2{1};
	vector<int> row2_2{2};
	vector<int> row3_2{3};
	
	vector<vector<int>> matrix2;
	matrix2.push_back(row1_2);
	matrix2.push_back(row2_2);
	matrix2.push_back(row3_2);
	
	//Matrix 3: [1, 2, 3]
	vector<int> row1_3{4, 5, 6};
	
	vector<vector<int>> matrix3;
	matrix3.push_back(row1_3);
	
	//Matrix 4: [1 2, 3 4, 5 6]
	vector<int> row1_4{1, 2};
	vector<int> row2_4{3, 4};
	vector<int> row3_4{5, 6};
	
	vector<vector<int>> matrix4;
	matrix4.push_back(row1_4);
	matrix4.push_back(row2_4);
	matrix4.push_back(row3_4);
		
	vector<vector<vector<int>>> multiple_matrices;
	multiple_matrices.push_back(matrix1);
	multiple_matrices.push_back(matrix2);
	multiple_matrices.push_back(matrix3);
	multiple_matrices.push_back(matrix4);
	
	vector<vector<int>> mult_matrix = matrix_multiplication(multiple_matrices);
	
	EXPECT_EQ(mult_matrix.at(0).at(0), 686);
	EXPECT_EQ(mult_matrix.at(0).at(1), 896);
	EXPECT_EQ(mult_matrix.at(1).at(0), 1568);
	EXPECT_EQ(mult_matrix.at(1).at(1), 2048);
}

TEST(MatrixMultiplicationTest, FiveMatrices) {
	
	//Matrix 1: [1 2 3, 4 5 6]
	vector<int> row1_1{1, 2, 3};
	vector<int> row2_1{4, 5, 6};
	
	vector<vector<int>> matrix1;
	matrix1.push_back(row1_1);
	matrix1.push_back(row2_1);
	
	//Matrix 2: [1, 2, 3]
	vector<int> row1_2{1};
	vector<int> row2_2{2};
	vector<int> row3_2{3};
	
	vector<vector<int>> matrix2;
	matrix2.push_back(row1_2);
	matrix2.push_back(row2_2);
	matrix2.push_back(row3_2);
	
	//Matrix 3: [1, 2, 3]
	vector<int> row1_3{4, 5, 6};
	
	vector<vector<int>> matrix3;
	matrix3.push_back(row1_3);
	
	//Matrix 4: [1 2, 3 4, 5 6]
	vector<int> row1_4{1, 2};
	vector<int> row2_4{3, 4};
	vector<int> row3_4{5, 6};
	
	vector<vector<int>> matrix4;
	matrix4.push_back(row1_4);
	matrix4.push_back(row2_4);
	matrix4.push_back(row3_4);
	
	//Matrix 5: [1 2, 3 4, 5 6]
	vector<int> row1_5{1, 2};
	vector<int> row2_5{3, 4};
	
	vector<vector<int>> matrix5;
	matrix5.push_back(row1_5);
	matrix5.push_back(row2_5);
		
	vector<vector<vector<int>>> multiple_matrices;
	multiple_matrices.push_back(matrix1);
	multiple_matrices.push_back(matrix2);
	multiple_matrices.push_back(matrix3);
	multiple_matrices.push_back(matrix4);
	multiple_matrices.push_back(matrix5);
	
	vector<vector<int>> mult_matrix = matrix_multiplication(multiple_matrices);
	
	EXPECT_EQ(mult_matrix.at(0).at(0), 3374);
	EXPECT_EQ(mult_matrix.at(0).at(1), 4956);
	EXPECT_EQ(mult_matrix.at(1).at(0), 7712);
	EXPECT_EQ(mult_matrix.at(1).at(1), 11328);
}

TEST(MatrixMultiplicationTest, ThreeMatrices2) {
	
	//Matrix 1: [1 2 3, 4 5 6]
	vector<int> row1_1{11, 2, 3};
	vector<int> row2_1{4, 15, 6};
	
	vector<vector<int>> matrix1;
	matrix1.push_back(row1_1);
	matrix1.push_back(row2_1);
	
	//Matrix 2: [1, 2, 3]
	vector<int> row1_2{1};
	vector<int> row2_2{4};
	vector<int> row3_2{7};
	
	vector<vector<int>> matrix2;
	matrix2.push_back(row1_2);
	matrix2.push_back(row2_2);
	matrix2.push_back(row3_2);
	
	//Matrix 3: [1, 2, 3]
	vector<int> row1_3{3, 0, 15};
	
	vector<vector<int>> matrix3;
	matrix3.push_back(row1_3);
		
	vector<vector<vector<int>>> multiple_matrices;
	multiple_matrices.push_back(matrix1);
	multiple_matrices.push_back(matrix2);
	multiple_matrices.push_back(matrix3);
	
	vector<vector<int>> mult_matrix = matrix_multiplication(multiple_matrices);
	
	EXPECT_EQ(mult_matrix.at(0).at(0), 120);
	EXPECT_EQ(mult_matrix.at(0).at(1), 0);
	EXPECT_EQ(mult_matrix.at(0).at(2), 600);
	EXPECT_EQ(mult_matrix.at(1).at(0), 318);
	EXPECT_EQ(mult_matrix.at(1).at(1), 0);
	EXPECT_EQ(mult_matrix.at(1).at(2), 1590);
}

TEST(MatrixMultiplicationTest, InvalidMatrix) {
	
	//Matrix 1: [1 2 3, 4 5]
	vector<int> row1_1{1, 2, 3};
	vector<int> row2_1{4, 5};
	
	vector<vector<int>> matrix1;
	matrix1.push_back(row1_1);
	matrix1.push_back(row2_1);
	
	//Matrix 2: [1, 2, 3]
	vector<int> row1_2{1};
	vector<int> row2_2{2};
	vector<int> row3_2{3};
	
	vector<vector<int>> matrix2;
	matrix2.push_back(row1_2);
	matrix2.push_back(row2_2);
	matrix2.push_back(row3_2);
	
	vector<vector<vector<int>>> multiple_matrices;
	multiple_matrices.push_back(matrix1);
	multiple_matrices.push_back(matrix2);
	
	vector<vector<int>> mult_matrix = matrix_multiplication(multiple_matrices);
	
	EXPECT_TRUE(mult_matrix.empty());
}

TEST(MatrixMultiplicationTest, InvalidMatrix2) {
	
	//Matrix 1: [1 2 3, 4 5]
	vector<int> row1_1{1, 2, 3};
	vector<int> row2_1{4, 5, 6};
	
	vector<vector<int>> matrix1;
	matrix1.push_back(row1_1);
	matrix1.push_back(row2_1);
	
	//Matrix 2: [1, 2, 3]
	vector<int> row1_2{1, 2};
	vector<int> row2_2{3, 4};
	vector<int> row3_2{5, 6};
	
	vector<vector<int>> matrix2;
	matrix2.push_back(row1_2);
	matrix2.push_back(row2_2);
	matrix2.push_back(row3_2);
	
	//Matrix 3: [1, 2, 3]
	vector<int> row1_3{1};
	vector<int> row2_3{2, 3};
	
	vector<vector<int>> matrix3;
	matrix3.push_back(row1_3);
	matrix3.push_back(row2_3);
	
	vector<vector<vector<int>>> multiple_matrices;
	multiple_matrices.push_back(matrix1);
	multiple_matrices.push_back(matrix2);
	multiple_matrices.push_back(matrix3);
	
	vector<vector<int>> mult_matrix = matrix_multiplication(multiple_matrices);
	
	EXPECT_TRUE(mult_matrix.empty());
}

TEST(MatrixMultiplicationTest, MisMatchDimensionMatrix) {
	
	//Matrix 1: [1 2 3, 4 5]
	vector<int> row1_1{1, 2, 3};
	vector<int> row2_1{4, 5, 6};
	
	vector<vector<int>> matrix1;
	matrix1.push_back(row1_1);
	matrix1.push_back(row2_1);
	
	//Matrix 2: [1, 2, 3]
	vector<int> row1_2{1};
	vector<int> row2_2{2};

	vector<vector<int>> matrix2;
	matrix2.push_back(row1_2);
	matrix2.push_back(row2_2);
	
	vector<vector<vector<int>>> multiple_matrices;
	multiple_matrices.push_back(matrix1);
	multiple_matrices.push_back(matrix2);
	
	vector<vector<int>> mult_matrix = matrix_multiplication(multiple_matrices);
	
	EXPECT_TRUE(mult_matrix.empty());
}

TEST(MatrixMultiplicationTest, MisMatchDimensionMatrix2) {
	
	//Matrix 1: [1 2 3, 4 5]
	vector<int> row1_1{1, 2, 3};
	vector<int> row2_1{4, 5, 6};
	
	vector<vector<int>> matrix1;
	matrix1.push_back(row1_1);
	matrix1.push_back(row2_1);
	
	//Matrix 2: [1, 2, 3]
	vector<int> row1_2{1};
	vector<int> row2_2{2};
	vector<int> row3_2{3};

	vector<vector<int>> matrix2;
	matrix2.push_back(row1_2);
	matrix2.push_back(row2_2);
	matrix2.push_back(row3_2);
	
	//Matrix 3: [1, 2, 3]
	vector<int> row1_3{1, 2};
	vector<int> row2_3{3, 4};
	vector<int> row3_3{5, 6};
	vector<int> row4_3{7, 8};

	vector<vector<int>> matrix3;
	matrix3.push_back(row1_3);
	matrix3.push_back(row2_3);
	matrix3.push_back(row3_3);
	matrix3.push_back(row4_3);
	
	vector<vector<vector<int>>> multiple_matrices;
	multiple_matrices.push_back(matrix1);
	multiple_matrices.push_back(matrix2);
	multiple_matrices.push_back(matrix3);
	
	vector<vector<int>> mult_matrix = matrix_multiplication(multiple_matrices);
	
	EXPECT_TRUE(mult_matrix.empty());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
