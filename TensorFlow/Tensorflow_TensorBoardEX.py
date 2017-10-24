import tensorflow as tf
a = tf.constant(10,name="a")
b = tf.constant(90,name="b")
y= tf.Variable(a+b*2,name="y")

init = tf.global_variables_initializer()

with tf.Session() as session:
    merge = tf.summary.merge_all()
    writer = tf.summary.FileWriter\
             ("log/",session.graph)
    session.run(init)
    print(session.run(y))
