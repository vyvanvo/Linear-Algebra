#include "linearalgebra.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void menu() {
    cout << "Menu: " << endl;
    cout << "1. Transpose" << endl;
    cout << "2. Matrix Multiplication" << endl;
    cout << "3. Quit" << endl;
}

void selectOption(int option) {
    
    if (option == 1) {

        //get user input
        string matrix_input;
        cout << "Please enter a matrix to transpose using this formatting \' 1 2 3, 4 5 6, 7 8 9 \'." << endl;
        cout << "A comma indicates a new row and a space indicates the next number in the same row." << endl;
        cin.ignore();
        getline(cin, matrix_input);

        stringstream ss;
        ss << matrix_input;

        vector<vector<int>> v_matrix;
        vector<int> v_row;
            
        for (int i = 0; ss >> i;) { //extract integers from user input
            v_row.push_back(i); //add integer to row

            if (ss.peek() == ',') { //',' indicates new row
                ss.ignore();
                v_matrix.push_back(v_row);
                v_row.clear();
             }
        }

        v_matrix.push_back(v_row); //add last row to matrix
        cout << endl;

        vector<vector<int>> transpose_matrix = transpose(v_matrix); 
        
    }
    else if (option == 2) {

        //get number of matrices to multiply
        int num_matrices;
        cout << "Please enter the number of matrices to multiply. Must be 2 or greater." << endl;
        cin >> num_matrices;
        cin.ignore();
        
        while(num_matrices < 2) {
        	cout << "Please enter the number of matrices to multiply. Must be 2 or greater." << endl;
        	cin >> num_matrices;
        	cin.ignore();
        }

        vector< vector< vector<int> > > v_mult_matrices; //vector of matrices
        vector<vector<int>> v_matrix;
        vector<int> v_row;

        for (int i = 0; i < num_matrices; i++) {

            //get user's matrix input
            string matrix_input;
            cout << "Please enter a matrix to transpose using this formatting \' 1 2 3, 4 5 6, 7 8 9 \'." << endl;
            cout << "A comma indicates a new row and a space indicates the next number in the same row. " << endl;
            getline(cin, matrix_input);

            stringstream ss;
            ss << matrix_input;
    
            for (int i = 0; ss >> i;) { //extract integers from user's input
                v_row.push_back(i); //add integer to row

                if (ss.peek() == ',') { // ',' indicates new row
                    ss.ignore();
                    v_matrix.push_back(v_row);
                    v_row.clear();
                }
            }


            v_matrix.push_back(v_row); //add last row to matrix
            cout << endl;
          
            v_mult_matrices.push_back(v_matrix);

            for (int i = 0; i < v_matrix.size(); i++) {
                for (int j = 0; j < v_matrix.at(i).size(); j++) {
                    cout << v_matrix.at(i).at(j) << ' ';
                }
                cout << endl;
            }

            cout << endl;

            v_row.clear();
            v_matrix.clear();

        }

        //print out matrices entered
        for (int i = 0; i < num_matrices; i++) {
            cout << "Matrix " << (i+1) << ": " << endl;
            for (int j = 0; j < v_mult_matrices.at(i).size(); j++) {
                for (int k = 0; k < v_mult_matrices.at(i).at(j).size(); k++) {
                    cout << v_mult_matrices.at(i).at(j).at(k) << ' ';
                }
                cout << endl;
            }
            cout << endl;
        }

        vector<vector<int>> mult_matrix = matrix_multiplication(v_mult_matrices);

    }       
}

int main() {
	int option;
	menu();	
    cin >> option;
	
	while (option < 3) {
		selectOption(option);
    	menu();	
    	cin >> option;
    }
    
    return 1;
}
