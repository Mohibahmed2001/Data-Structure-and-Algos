object Solution {
    def hIndex(citations: Array[Int]): Int = {
  citations.sorted
    .foldRight(0) { (numCitations, hIdx) =>
      if (numCitations < hIdx) hIdx
      else math.min(hIdx + 1, numCitations)
    }
}
}