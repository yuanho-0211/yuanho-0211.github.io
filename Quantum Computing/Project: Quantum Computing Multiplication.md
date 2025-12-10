## Quantum Computing Multiplication 14*7
```c
from qiskit import QuantumCircuit,transpile
from qiskit.visualization import circuit_drawer
from qiskit_aer import Aer
from qiskit.visualization import circuit_drawer
from qiskit.visualization import plot_bloch_multivector
from qiskit.visualization import plot_histogram
import matplotlib.pyplot as plt 

def quantum_multiplier_14x7():
    qc = QuantumCircuit(28, 7)
    qc.x(0)
    qc.x(1)
    qc.x(2)

    qc.x(4)
    qc.x(5)
    qc.x(6)

    qc.ccx(0,3,7)
    qc.ccx(0,4,8)
    qc.ccx(0,5,9)
    qc.ccx(0,6,10)
    qc.ccx(1,3,11)
    qc.ccx(1,4,12)
    qc.ccx(1,5,13)
    qc.ccx(1,6,14)
    qc.ccx(2,3,15)
    qc.ccx(2,4,16)
    qc.ccx(2,5,17)
    qc.ccx(2,6,18)

    qc.cx(7,19)
    qc.cx(8,20)
    qc.cx(11,20)

    qc.cx(9,21)
    qc.cx(12,21)
    qc.cx(15,21)
    qc.ccx(9,12,22)

    qc.cx(10,23)
    qc.cx(13,23)
    qc.cx(16,23)
    qc.cx(22,23)

    qc.cx(14,24)
    qc.cx(17,24)
    qc.ccx(14,17,26)
    qc.cx(18,25)

    qc.measure([19,20,21,23,24,25,26],[0,1,2,3,4,5,6])
    return qc
qc=quantum_multiplier_14x7()
backend = Aer.get_backend('qasm_simulator') 
transpiled_circuit = transpile(qc, backend) 
job = backend.run(transpiled_circuit, shots=1024) 
result = job.result() 
counts = result.get_counts(qc) 
# Print and plot the result 
print(counts) 
plot_histogram(counts) 
plt.show() 
# Draw the circuit 
qc.draw("mpl")
```
