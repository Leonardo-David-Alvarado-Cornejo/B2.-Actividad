				void restar(){
							
				    float A[10][10], B[10][10], C[10][10];
				    
				    //Almacenar datos
				    
				    for(int i=0;i<1;i++){
				    	for(int j=0;j<10;j++){
				    		cout<<"\tIngrese valor para A["<<i<<"]["<<j<<"]: ";
							cin>>A[i][j];												
						}
					    cout<<"\n\n";	
					}
				    cout<<"\n\n";
					system("pause");
					system("cls");
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							cout<<"\tIngrese valor para B["<<i<<"]["<<j<<"]: ";
							cin>>B[i][j];
						}
						cout<<"\n\n"; 
					}
				    cout<<"\n\n";
					system("pause");
					system("cls");
					cout<<"\n\n";
					
					//Realiza la operacion de resta
					
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							C[i][j]=A[i][j]-B[i][j];
						} 
					    cout<<"\n\n";	
					}  											
					cout<<"\n\n";
							
					//Mostrar las matrice
					
					cout<<"\n\n";
				    cout<<"\t\t\t\t  //===========================//"<<endl;
					cout<<"\t\t\t\t  //     Mostrando matriz 1    //"<<endl;
					cout<<"\t\t\t\t  //===========================//"<<endl;
					cout<<"\n\n";
					
					
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							cout<<"\t "<<" ["<< A[i][j]<<"] ";
						
						}
					    cout<<"\n\n";
					}
					cout<<"\n\n";
				    cout<<"\t\t\t\t  //===========================//"<<endl;
					cout<<"\t\t\t\t  //     Mostrando matriz 2    //"<<endl;
					cout<<"\t\t\t\t  //===========================//"<<endl;
					cout<<"\n\n";															
					
					
					for(int i=0;i<1;i++){
						for(int j=0;j<10;j++){
							cout<<"\t "<<" ["<< B[i][j]<<"] ";
						
						}
					    cout<<"\n\n";
					}	
	                cout<<"\n\n";        
			        cout<<"\t\t\t    //=======================================//"<<endl;								 	       	                                        
			        cout<<"\t\t\t    //    Mostrando resultado de la Resta    //"<<endl;
			        cout<<"\t\t\t    //=======================================//"<<endl;
			        cout<<"\n\n";
                    for(int i=0;i<1;i++){               
                        for(int j=0;j<10;j++){               			   
          		            cout<<"\t "<<"["<< C[i][j]<<"]";
                        }
                        cout<<"\n\n"; 
			        }
			        cout<<"\n\n";													
				}				
