#ifndef LINEARALGEBRA_H
#define LINEARALGEBRA_H

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transpose(vector<vector<int>> v_matrix) {
	vector<int> new_row;
    vector<vector<int>> transpose_matrix;

	int row = 0;
   	int col = 0;
   	
    //check if valid matrix
    if (!v_matrix.empty()) {
    	row = v_matrix.size();
    	col = v_matrix.at(0).size();
    }
    
    //print matrix entered
    cout << "Matrix Entered: " << endl;
    for (int i = 0; i < row; i++) {
        for(int j = 0; j < v_matrix.at(i).size(); j++) {
            cout << v_matrix.at(i).at(j) << ' ';
        }
        cout<< endl;
    }
    cout << endl;
    
    for (int i = 0; i < row; i++) {
        if (v_matrix.at(i).size() != col) {
            cout << "Not a valid matrix." << endl;
            cout << endl;
            return v_matrix; //return the original matrix
        }
    } 

    //create transposed matrix
    for (int i = 0; i < row; i++) { //new col = row
        new_row.push_back(0);
    }

    for (int i = 0; i < col; i++) {
        transpose_matrix.push_back(new_row);
    }

    //transpose matrix
    cout << "Transposed Matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transpose_matrix.at(j).at(i) = v_matrix.at(i).at(j); 
        } 
    }   

    //print result
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << transpose_matrix.at(i).at(j) << ' ';
        } 
        cout << endl;
    }   
        
    cout << endl;

    return transpose_matrix;
}

vector<vector<int>> matrix_multiplication(vector<vector<vector<int>>> v_mult_matrices) {

    vector<int> new_row;
    vector<vector<int>> mult_matrix; 
    //check if valid matrices
    for (int i = 0; i < v_mult_matrices.size(); i++) { //go through list of matrices
        for (int j = 0; j < v_mult_matrices.at(i).size(); j++ ) {
            int col = v_mult_matrices.at(i).at(0).size();
            if (v_mult_matrices.at(i).at(j).size() != col) {
              cout << "Matrix " << (i+1) << " is not a valid matrix." << endl;
              cout << endl;
              return mult_matrix; //return empty matrix
            }
        }
    }

    //matrix multiplication
    for (int i = 0; i < v_mult_matrices.size() - 1; i++) {

		mult_matrix.clear(); //clear matrix

        //matrix 1 size
        int row1 = v_mult_matrices.at(i).size(); // m1
        int col1 = v_mult_matrices.at(i).at(0).size(); //n1

        //matrix 2 size
        int row2 = v_mult_matrices.at(i+1).size(); // m2
        int col2 = v_mult_matrices.at(i+1).at(0).size(); //n2
        
        /*cout << "Check Matrix " << (i+1) << endl; 
        for (int j = 0; j < row1; j++) {
            for (int k = 0; k < col1; k++) {
                cout << v_mult_matrices.at(i).at(j).at(k) << ' ';
            }
            cout << endl;
        }
        cout << endl;
        

        cout << "Check Matrix " << (i+2) << endl; 
        for (int j = 0; j < row2; j++) {
            for (int k = 0; k < col2; k++) {
                cout << v_mult_matrices.at(i+1).at(j).at(k) << ' ';
            }
            cout << endl;
        }
        cout << endl;
        */

        if (col1 != row2) {
        	cout << "row 2: " << row2 << endl;
        	cout << "col 1: " << col1 << endl;
            cout << "Cannot multiply Matrix " << (i+1) << " and " << "Matrix " << (i+2) << ". Mismatched dimensions." << endl;
        	cout << endl;
           
            mult_matrix.clear();
            return mult_matrix; //empty matrix
        } 

        mult_matrix.clear(); //clear matrix;
        new_row.clear(); //clear row;
        
        //create temp 2D array for matrix multiplication
        for (int i = 0; i < col2; i++) {
            new_row.push_back(0);
        }

        for (int i = 0; i < row1; i++) {
            mult_matrix.push_back(new_row);
        }

        //calculate matrix
        for (int j = 0; j < row1; j++) { //iterator for row for matrix 1
            for (int k = 0; k < col2; k++) { //iterator for column for matrix 2
                mult_matrix.at(j).at(k) = 0;
                for (int p = 0; p < col1; p++) { //iterator along col for matrix 1 and row for matrix 2
                   mult_matrix.at(j).at(k) = mult_matrix.at(j).at(k) + v_mult_matrices.at(i).at(j).at(p) * v_mult_matrices.at(i+1).at(p).at(k);
                }
            }
        }

        v_mult_matrices.at(i+1).clear();
        v_mult_matrices.at(i+1) = mult_matrix;
        
    }
    
    cout << "Matrix Multiplication: " << endl;
        
    for (int i = 0; i < mult_matrix.size(); i++) {
    	for (int j = 0; j < mult_matrix.at(0).size(); j++) {
        	cout << mult_matrix.at(i).at(j) << ' ';
        }
        cout << endl;
    }
    cout << endl;

    return mult_matrix;
}

#endif
