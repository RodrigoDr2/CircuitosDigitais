

#define A 10 // Definindo a porta para a entrada lógica A
#define B 9 // Definindo a porta para a entrada lógica B
#define saida 8 // Definindo a porta para a saida lógica (resultado)

int arrayA[] = {0, 0, 1, 1};
int arrayB[] = {0, 1, 0, 1};

void funcaoAnd() {
  int arrayResultado[4];
  for(int i = 0; i < 4; i++){
    if(arrayA[i] == 1 && arrayB[i] == 1) {
    	arrayResultado[i] = 1;
    } else {
    	arrayResultado[i] = 0;
    }
    
    digitalWrite(A, arrayA[i]);
    digitalWrite(B, arrayB[i]);
    digitalWrite(saida, arrayResultado[i]);
    
    delay(2000);
  }
}

void funcaoOr() {
  int arrayResultado[4];
  for(int i = 0; i < 4; i++){
    if(arrayA[i] == 1 || arrayB[i] == 1) {
    	arrayResultado[i] = 1;
    } else {
    	arrayResultado[i] = 0;
    }
    
    digitalWrite(A, arrayA[i]);
    digitalWrite(B, arrayB[i]);
    digitalWrite(saida, arrayResultado[i]);
    
    delay(2000);
  }
}

void funcaoNand() {
  int arrayResultado[4];
  for(int i = 0; i < 4; i++){
    if(arrayA[i] != 1 || arrayB[i] != 1) {
    	arrayResultado[i] = 1;
    } else {
    	arrayResultado[i] = 0;
    }
    
    digitalWrite(A, arrayA[i]);
    digitalWrite(B, arrayB[i]);
    digitalWrite(saida, arrayResultado[i]);
    
    delay(2000);
  }
}

void funcaoNor() {
  int arrayResultado[4];
  for(int i = 0; i < 4; i++){
    if(arrayA[i] != 1 && arrayB[i] != 1) {
    	arrayResultado[i] = 1;
    } else {
    	arrayResultado[i] = 0;
    }
    
    digitalWrite(A, arrayA[i]);
    digitalWrite(B, arrayB[i]);
    digitalWrite(saida, arrayResultado[i]);
    
    delay(2000);
  }
}

void funcaoXor() {
  int arrayResultado[4];
  for(int i = 0; i < 4; i++){
    if(arrayA[i] == arrayB[i]) {
    	arrayResultado[i] = 1;
    } else {
    	arrayResultado[i] = 0;
    }
    
    digitalWrite(A, arrayA[i]);
    digitalWrite(B, arrayB[i]);
    digitalWrite(saida, arrayResultado[i]);
    
    delay(2000);
  }
}

void funcaoXnor() {
  int arrayResultado[4];
  for(int i = 0; i < 4; i++){
    if(arrayA[i] != arrayB[i]){
    	arrayResultado[i] = 1;
    } else {
    	arrayResultado[i] = 0;
    }
    
    digitalWrite(A, arrayA[i]);
    digitalWrite(B, arrayB[i]);
    digitalWrite(saida, arrayResultado[i]);
    
    delay(2000);
  }
}

 
void setup() { 
  pinMode(saida, OUTPUT); // Configurando um pino como a saída digital
  pinMode(A, OUTPUT); // Configurando um pino como entrada digital
  pinMode(B, OUTPUT); // Configurando um pino como entrada digital 
}
 
void loop() { // O processo abaixo será repetido infinitamente, a cada ciclo de clock
  funcaoAnd();
  funcaoOr();
  funcaoNand();
  funcaoNor();
  funcaoXor();
  funcaoXnor();
  
  delay(2000);
}