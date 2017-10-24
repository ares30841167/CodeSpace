import numpy as np
tensor_1d = np.array([1.3,1,4.0,23.99])
print(tensor_1d.ndim)
print(tensor_1d.shape)
print(tensor_1d.dtype)

import tensorflow as tf
tf_tensor=tf.convert_to_tensor(tensor_1d,dtype=tf.float64)
with tf.Session() as sess:
    print(sess.run(tf_tensor))
