import matplotlib.pyplot as plt
import numpy as np
import pandas as pd



def plot_stats():

    log_file = "/home/marios/Desktop/Software Projects/C++_Projects/Test_Structures/logged_stats.txt"

    data = pd.read_csv(log_file, sep="", header=None, delimiter=" ")
    data.columns = ["DataStructure", "NumOfElems", "NumOfTests", "LoadingTime", "SearchTime"]
    del data["DataStructure"]
    # Display the dataframe
    # with pd.option_context('display.max_rows', None, 'display.max_columns', 5):
    #     print(data)


    np.set_printoptions(suppress=True)  #Suppress scientific notation
    stats = data.values
    print(stats)

    time = np.arange(0, 12, 1)
    size = np.arange(10000, 110000, 10000)
    runs = stats[:10, 1]

    HSload_time = stats[:10, 2]
    TSload_time = stats[10:20, 2]
    Vload_time = stats[20:30, 2]
    LLload_time = stats[30:40, 2]

    HSsearch_time = stats[:10, 3]
    TSsearch_time = stats[10:20, 3]
    Vsearch_time = stats[20:30, 3]
    LLsearch_time = stats[30:40, 3]


    plt.style.use('classic')
    plt.subplot(1, 2, 1)
    plt.xlabel('Loading size')
    plt.ylabel('Loading Time')
    plt.plot(size, HSload_time, '*-', label='HashSet')
    plt.plot(size, TSload_time, '+-', label='TreeSet')
    plt.plot(size, Vload_time, '.-', label='Vector')
    plt.plot(size, LLload_time, label='Linked List')
    plt.legend(loc="upper left")

    plt.subplot(1, 2, 2)
    plt.xlabel('Loading size')
    plt.ylabel('Searching Time')
    plt.plot(size, HSsearch_time, '*-', label='HashSet')
    plt.plot(size, TSsearch_time, '+-', label='TreeSet')
    plt.plot(size, Vsearch_time, '.-', label='Vector')
    plt.plot(size, LLsearch_time, label='Linked List')
    plt.legend(loc="upper left")

    plt.show()


if __name__ == '__main__':

    plot_stats()