import tensorflow as tf

value = tf.Variable(0,name='counter')

one = tf.constant(1)

new_value = tf.add(value , one)

update_value = tf.assign(value , new_value)

init = tf.global_variables_initializer()

sess = tf.Session()

sess.run(init)

for _ in range(10):
    sess.run(update_value)
    print(sess.run(value))
