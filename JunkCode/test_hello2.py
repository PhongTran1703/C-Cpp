# test_hello2.py
import unittest
from hello2 import greet   # 👈 import from hello2, not hello

class TestHello(unittest.TestCase):
    def test_greet(self):
        self.assertEqual(greet("Alice"), "Hello, Alice!")
        self.assertEqual(greet("Bob"), "Hello, Bob!")

if __name__ == "__main__":
    unittest.main()

