function main(input) {
    const array = input.split(" ")
    const split = array.flatMap(a => a.split("\n"))
    const numArray = split.map(e => parseInt(e)).filter((x) => { return x === x })

    const aDate = new Date(2026, numArray[0] - 1, numArray[1])
    const bDate = new Date(2026, numArray[2] - 1, numArray[3])
    const data_num = numArray[4]

    var sum = 0
    for (var i = 0; i < data_num; i++) {
        const month = numArray[5 + 3 * i]
        const date = numArray[6 + 3 * i]
        const flowerNum = numArray[7 + 3 * i]
        sum += flowerNum

        if (sum >= 5) {
            const answerDate = new Date(2026, month - 1, date)
            console.log(month, date)
            //console.log(Math.abs((aDate.getTime()  - answerDate.getTime()) / (60 * 60 * 1000 * 24)), Math.abs((bDate.getTime() - answerDate.getTime()) / (60 * 60 * 1000 * 24)))

            if (Math.abs(aDate - answerDate) == Math.abs(bDate - answerDate)) {
                console.log('DRAW')
            }
            else if (Math.abs(aDate - answerDate) < Math.abs(bDate - answerDate)) {
                console.log('A')
            }
            else {
                console.log('B')
            }
            return
        }
    }
}

main(require("fs").readFileSync("/dev/stdin", "utf8"));