#ifndef COMMAND_ICOMMAND_H
#define COMMAND_ICOMMAND_H

namespace Command
{
    /*! \interface ICommand
     *
     * Command Interface
     *
     * \namespace Command
     */
	class ICommand
	{
	    public:
		    virtual void execute()=0;
	};
}

#endif