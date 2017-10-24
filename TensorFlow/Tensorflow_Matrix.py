import tensorflow as tf
import numpy as np
matrix1 = np.array([(2,2,2),(2,2,2),(2,2,2)],dtype = 'float32')
matrix2 = np.array([(4,4,4),(4,4,4),(4,4,4)],dtype = 'float32')
matrix3 = np.array([(2,7,2),(1,4,2),(9,0,2)],dtype = 'float32')

matrix1 = tf.constant(matrix1)
matrix2 = tf.constant(matrix2)
matrix3 = tf.constant(matrix3)

matrix_product = tf.matmul(matrix1,matrix2)
matrix_add = tf.add(matrix1,matrix2)
matrix_det = tf.matrix_determinant(matrix3)

with tf.Session() as sess:
    print(sess.run(matrix_product))
    print(sess.run(matrix_add))
    print(sess.run(matrix_det))
