package main

import (
	"flag"
	"fmt"
)

func main() {
	var port int
	flag.IntVar(&port, "p", 8080, "Port of the metadata service")
	flag.Parse()

	fmt.Printf("Starting API at localhost:%d\n", port)
}
