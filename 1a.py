class FCFS:
    def processData(self, no_of_processes):
        process_data = []
        for i in range(1,no_of_processes+1):
            temporary = []
            arrival_time = int(input("Enter Arrival Time of Process {}: ".format(i)))
            burst_time = int(input("Enter Burst Time of Process {}: ".format(i)))
            temporary.extend([i, arrival_time, burst_time])
            process_data.append(temporary)
        FCFS.schedulingProcess(self, process_data)
    def schedulingProcess(self, process_data):
        starting_time = []
        exit_time = []
        s_time = 0
        for i in range(len(process_data)):
            if(s_time < process_data[i][1]):
                s_time = process_data[i][1]
            starting_time.append(s_time)
            s_time = s_time + process_data[i][2]
            e_time = s_time
            exit_time.append(e_time)
            process_data[i].append(e_time)
        t_time = FCFS.calTurnaroundTime(self, process_data)
        w_time = FCFS.calWaitingTime(self, process_data)
        FCFS.printData(self, process_data, t_time, w_time)
    def calTurnaroundTime(self, process_data):
        total_turnaround_time = 0
        for i in range(len(process_data)):
            turnaround_time = process_data[i][3] - process_data[i][1]
            total_turnaround_time += turnaround_time
            process_data[i].append(turnaround_time)
        average_turnaround_time = total_turnaround_time / len(process_data)
        return average_turnaround_time
    def calWaitingTime(self, process_data):
        total_waiting_time = 0
        for i in range(len(process_data)):
            waiting_time = process_data[i][4] - process_data[i][2]
            total_waiting_time = total_waiting_time + waiting_time
            process_data[i].append(waiting_time)
        average_waiting_time = total_waiting_time / len(process_data)
        return average_waiting_time
    def printData(self, process_data, average_turnaround_time, average_waiting_time):
        print("Process_ID  Arrival_Time  Burst_Time  Completion_Time  Turnaround_Time  Waiting_Time")
        for i in range(len(process_data)):
            for j in range(len(process_data[i])):
                print(process_data[i][j], end="    ")
            print()
        print('Average Turnaround Time:',average_turnaround_time)
        print('Average Waiting Time:',average_waiting_time)
        print("Number of context switches:",no_of_processes-1)
no_of_processes = int(input("Enter number of processes: "))
fcfs = FCFS()
fcfs.processData(no_of_processes)
