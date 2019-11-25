#ifndef _ACTION_H
#define _ACTION_H
class Action {
	public:
		Action();
		virtual void resize(int percent) = 0;
		~Action();
};
#endif //_ACTION_H
