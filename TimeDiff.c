#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time getTimeDifference(struct Time startTime, struct Time endTime) {
    struct Time diff;

    // Calculate difference in seconds
    int startSeconds = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int endSeconds = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;
    int secondsDiff = endSeconds - startSeconds;

    // Convert seconds to hours, minutes, and seconds
    diff.hours = secondsDiff / 3600;
    secondsDiff %= 3600;
    diff.minutes = secondsDiff / 60;
    diff.seconds = secondsDiff % 60;

    return diff;
}

int main() {
    struct Time startTime, endTime, diff;

    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    // Calculate the time difference
    diff = getTimeDifference(startTime, endTime);

    printf("Time difference: %d hours %d minutes %d seconds\n",
           diff.hours, diff.minutes, diff.seconds);

    return 0;
}
