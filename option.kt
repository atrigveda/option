import java.math.BigInteger
import java.util.*
import index.sc

internal object index {
    var sc = Scanner(System.`in`)
}

internal object option{
    @JvmStatic
    fun main(args: Array<String>) {
        main()
    }

    // Class for menu operations .
    fun main() {
        // This is the menu
        println("lets do some calculations")
        println("what do you want to do ")
        println("Here are your options")
        println("0- Exit")
        println("1- Sum")
        println("2- Difference")
        println("3- Divide")
        println("4- Multiply")
        println("5- Check even or odd")
        println("6- To calculate factorial")
        println("enter any number listed above to continue :)")
        val i = sc.next()


        // Menu operations .
        while (true) {
            if (i == "1") {
                println("ok, good choice. Lets do some additions :)")
                try {
                    plus.main()
                    break
                } catch (e: Exception) {
                    e.printStackTrace()
                }
            } else if (i == "2") {
                println("ok, good choice lets find some difference  ;) ")
                try {
                    minus.main()
                    break
                } catch (e: Exception) {
                    e.printStackTrace()
                }
            } else if (i == "3") {
                println("ok, good choice lets do some divisions  :]")
                try {
                    divide.main()
                    break
                } catch (e: Exception) {
                    e.printStackTrace()
                }
            } else if (i == "4") {
                println("ok, good choice lets do some multiplication :{)")
                try {
                    multiply.main()
                    break
                } catch (e: Exception) {
                    e.printStackTrace()
                }
            } else if (i == "0") {
                println("Bye :)")
                System.exit(0)
                break
            } else if (i == "5") {
                println("lets check even odd")
                try {
                    evenOdd.main()
                    break
                } catch (e: Exception) {
                    e.printStackTrace()
                }
            } else if (i == "6") {
                println("Factorials ! cool ! ")
                try {
                    factorial.main()
                    break
                } catch (e: Exception) {
                    e.printStackTrace()
                }
                // Invalid Input Detector
            } else {
                println("Invalid input   :(")
                println("please try again :)")
                main()
            }
        }
    }
}

internal object minus{
    // Minus class numbers
    fun main() {
        while (true) {
            println("enter the first no from which you want to subtract :~~")
            val a = sc.nextInt().toFloat()
            println("-")
            val b = sc.nextInt().toFloat()
            println("$a - $b is :~~")
            val c = a - b
            println("=   $c")
            println("do you want to quit or you want to go to the menu(if yes enter 'y' else enter 'n' )" + "(for menu enter m)")
            val dj = sc.next()
            if (dj == "y") {
                println("Bye :)")
                break
            } else if (dj == "n") {
                println("welcome again :)")
                continue
            } else if (dj == "m") {
                option.main()
            } else {
                println("invalid input")
                println("try again!!")
                break
            }
        }
    }
}

internal object plus{
    // Class to add the numbers
    fun main() {
        while (true) {
            println("enter the first no you want to add billow :~~")
            val a = sc.nextInt().toFloat()
            println("+")
            val b = sc.nextInt().toFloat()
            println("The sum of" + a + "and" + b + " is :~~")
            val c = a + b
            println("=   $c")
            println("do you want to quit or you want to go to the menu(if yes enter 'y' else enter 'n' )" + "(for menu enter m)")
            val dj = sc.next()
            if (dj == "y") {
                println("Bye :)")
                break
            } else if (dj == "n") {
                println("welcome again :)")
                continue
            } else if (dj == "m") {
                option.main()
            } else {
                println("invalid input")
                println("try again!!")
                break
            }
        }
    }
}

internal object divide{
    // Class to divide numbers
    fun main() {
        while (true) {
            println("enter the two want to divide billow :~~")
            val a = sc.nextInt().toFloat()
            println("enter the next no through which you want to divide:~~")
            val b = sc.nextInt().toFloat()
            println("$a / $b is :~~")
            val c = a / b
            println("=   $c")
            println("do you want to quit or you want to go to the menu(if yes enter 'y' else enter 'n' )" + "( for menu enter m)")
            val dj = sc.next()
            if (dj == "y") {
                println("Bye :)")
                break
            } else if (dj == "n") {
                println("welcome again :)")
                continue
            } else if (dj == "m") {
                option.main()
            } else {
                println("invalid input")
                println("try again!!")
                break
            }
        }
    }
}

internal object multiply{
    // Class for the multiplication option in the option main()
    fun main() {
        while (true) {
            println("enter the number want to multiply billow :~~")
            val a = sc.nextInt().toFloat()
            println("enter the next no billow through which you want to multiply:~~")
            val b = sc.nextInt().toFloat()
            println("$a x $b is :~~")
            val c = a * b
            println("=   $c")
            println("do you want to quit or you want to go to the menu(if yes enter 'y' else enter 'n' )" + "( for menu enter m)")
            val dj = sc.next()
            if (dj == "y") {
                println("Bye :)")
                break
            } else if (dj == "n") {
                println("welcome again :)")
                continue
            } else if (dj == "m") {
                option.main()
            } else {
                println("invalid input")
                println("try again!!")
                break
            }
        }
    }
}

internal object factorial{
    // Class to check factorial
    fun main() {
        while (true) {
            println("enter the number want to calculate the factorial of :~~")
            val number = sc.next().toLong()
            var fact = BigInteger("1")
            var i: Long
            i = 1
            while (i <= number) {
                fact = fact.multiply(BigInteger.valueOf(i))
                i++
            }
            println("The factorial of $number is :-  $fact")
            println("do you want to quit or you want to go to the menu(if yes enter 'y' else enter 'n' )" + "( for menu enter m)")
            val dj = sc.next()
            if (dj == "y") {
                println("Bye :)")
                break
            } else if (dj == "n") {
                println("welcome again :)")
                continue
            } else if (dj == "m") {
                option.main()
            } else {
                println("invalid input")
                println("try again!!")
                break
            }
        }
    }
}

internal object evenOdd{
    // Class to check even or odd
    fun main() {
        while (true) {
            println("enter the number you want to check")
            val a = sc.nextInt()
            if (a % 2 == 0) {
                println(a.toString() + "is even")
            } else {
                println(a.toString() + "is odd")
            }
            println("do you want to quit or you want to go to the menu(if yes enter 'y' else enter 'n' )" + "(for menu enter m)")
            val dj = sc.next()
            if (dj == "y") {
                println("Bye :)")
                break
            } else if (dj == "n") {
                println("welcome again :)")
                continue
            } else if (dj == "m") {
                option.main()
            } else {
                println("invalid input")
                println("try again!!")
                break
            }
        }
    }
}
