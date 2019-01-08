#pragma once
class Ticket
{
public:
	Ticket (int priority, int timeToCompletion, int estimatedCompletionTime);
	~Ticket ();
	int getPriority () {
		return priority;
	}
	int getTimeToCompletion () {
		return timeToCompletion;
	}
	int getEstimatedCompletionTime () {
		return estimatedCompletionTime;
	}
	bool operator < (const Ticket & ticket) const {
		return priority < ticket.priority;
	}
private:
	int priority;
	int timeToCompletion;
	int estimatedCompletionTime;
}
;

