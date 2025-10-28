fun main() {
    val nums = readLine()?: ""
    val numsList = nums.split(" ")
    
    val N = numsList[0].toInt()
    val M = numsList[1].toInt()
    val K = numsList[2].toInt()

    var list = mutableListOf<Int>()
    for(cnt in 1..M) {
        list.add(readLine()!!.toInt())
    }

    var confCnt = 0
    var boyCnt = 0
    for(cnt in 1..N) {
        if(!list.contains(cnt)) {
            confCnt++
            boyCnt = 0
            continue
        }
        boyCnt++

        if(boyCnt == K) {
            break
        }
    }

    println(confCnt)
}