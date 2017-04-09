;***	Translateable text for command.com resident data.


;*	Input characters for critical error "Abort, Retry, Fail, Ignore?"
;	and Yes/No.

Abort_Char	db	"A"
Retry_Char	db	"R"
Ignore_Char	db	"I"
Fail_Char	db	"F"
Yes_Char	db	"Y"
No_Char 	db	"N"


;*	MESSAGES
;
;	See resmsg.equ for macro definition.


;*	Local messages.

ifdef BILINGUAL
	msg	Req_Abort, <"���<A>",0,"Abort">
	msg	Req_Retry, <", �ٽ� �õ�<R>",0,", Retry">
	msg	Req_Ignore,<", ����<I>",0,", Ignore">
	msg	Req_Fail,  <", ����<F>",0,", Fail">
	msg	Req_End,   <"?",0,"?">
	msg	MRead,	   <"�д� ��",0,"reading",0>
	msg	MWrite,	   <"���� ��",0,"writing",0>
	msg	BlkDevErr, <" %1 ����̺� %2",CR,LF,0," %1 drive %2",CR,LF>
	msg	CharDevErr,<" %1 ����̽� %2",CR,LF,0," %1 device %2",CR,LF>
	msg	NeedVolMsg,<"���� %1 �Ϸ� ��ȣ %2-%3��(��) �����ʽÿ�.",CR,LF,0,"Please insert volume %1 serial %2-%3",CR,LF>
	msg	BadFatMsg, <"���� �Ҵ� ���̺��� �ջ�Ǿ����ϴ�. ����̺� %1",CR,LF,0,"File allocation table bad, drive %1",CR,LF>
	msg	ComBad,	   <"COMMAND.COM�� �ùٸ��� �ʽ��ϴ�.",CR,LF,0,"Invalid COMMAND.COM",CR,LF>
	msg	PutBackMsg,<"%1 ��ũ�� %2 ����̺꿡 �����ʽÿ�.",CR,LF,0,"Insert disk with %1 in drive %2",CR,LF>
	msg	Prompt,	   <"�ƹ� Ű�� ������ ��ӵ˴ϴ� . . .",CR,LF,0,"Press any key to continue . . .",CR,LF>
	msg	EndBatMes, <CR,LF,"�ϰ� �۾��� ������� <Y/N>?",0,CR,LF,"Terminate batch job (Y/N)?">
	msg	ExecEMes,  <"%1��(��) ������ �� �����ϴ�.",CR,LF,0,"Cannot execute %1",CR,LF>
	msg	ExeBad,	   <".EXE ���� �����Դϴ�.",CR,LF,0,"Error in EXE file",CR,LF>
	msg	TooBig,	   <"���α׷��� �ʹ� Ŀ�� �޸𸮿� ���� �ʽ��ϴ�.",CR,LF,0,"Program too big to fit in memory",CR,LF>
	msg	NoHandMes, <CR,LF,"�� ���� �ڵ��� �����ϴ�.",0,CR,LF,"No free file handles">
	msg	RBadNam,   <"���ɾ� �Ǵ� ���� �̸��� Ʋ���ϴ�.",CR,LF,0,"Bad Command or file name",CR,LF>
	msg	AccDen,	   <"�׼����� �� �����ϴ�. ",0,"Access denied ">
	msg	BMemMes,   <CR,LF,"�޸� �Ҵ� �����Դϴ�.",0,CR,LF,"Memory allocation error">
	msg	HaltMes,   <CR,LF,"COMMAND�� �о���� �� �����ϴ�. �ý����� �����˴ϴ�.",CR,LF,0,CR,LF,"Cannot load COMMAND, system halted",CR,LF>
	msg	FRetMes,   <CR,LF,"COMMAND�� ������ �� �����ϴ�. �����մϴ�.",CR,LF,0,CR,LF,"Cannot start COMMAND, exiting",CR,LF>
	msg	Patricide, <CR,LF,"�ֻ��� ���μ����� ��ҵǾ� ����� �� �����ϴ�.",CR,LF,0,CR,LF,"Top level process aborted, cannot continue",CR,LF> 
	msg	Newlin,	   <CR,LF,0,CR,LF>
else
	msg	Req_Abort, <"���<A>">
	msg	Req_Retry, <", �ٽ� �õ�<R>">
	msg	Req_Ignore,<", ����<I>">
	msg	Req_Fail,  <", ����<F>">
	msg	Req_End,   <"?">
	msg	MRead,	   <"�д� ��",0>
	msg	MWrite,	   <"���� ��",0>
	msg	BlkDevErr, <" %1 ����̺� %2",CR,LF>
	msg	CharDevErr,<" %1 ����̽� %2",CR,LF>
	msg	NeedVolMsg,<"���� %1 �Ϸ� ��ȣ %2-%3��(��) �����ʽÿ�.",CR,LF>
	msg	BadFatMsg, <"���� �Ҵ� ���̺��� �ջ�Ǿ����ϴ�. ����̺� %1",CR,LF>
	msg	ComBad,	   <"COMMAND.COM�� �ùٸ��� �ʽ��ϴ�.",CR,LF>
	msg	PutBackMsg,<"%1 ��ũ�� %2 ����̺꿡 �����ʽÿ�.",CR,LF>
	msg	Prompt,	   <"�ƹ� Ű�� ������ ��ӵ˴ϴ� . . .",CR,LF>
	msg	EndBatMes, <CR,LF,"�ϰ� �۾��� ������� <Y/N>?">
	msg	ExecEMes,  <"%1��(��) ������ �� �����ϴ�.",CR,LF>
	msg	ExeBad,	   <"EXE ���� �����Դϴ�.",CR,LF>
	msg	TooBig,	   <"���α׷��� �ʹ� Ŀ�� �޸𸮿� ���� �ʽ��ϴ�.",CR,LF>
	msg	NoHandMes, <CR,LF,"�� ���� �ڵ��� �����ϴ�.">
	msg	RBadNam,   <"���ɾ� �Ǵ� ���� �̸��� Ʋ���ϴ�.",CR,LF>
	msg	AccDen,	   <"�׼����� �� �����ϴ�. ">
	msg	BMemMes,   <CR,LF,"�޸� �Ҵ� �����Դϴ�.">
	msg	HaltMes,   <CR,LF,"COMMAND�� �о���� �� �����ϴ�. �ý����� �����˴ϴ�.",CR,LF>
	msg	FRetMes,   <CR,LF,"COMMAND�� ������ �� �����ϴ�. �����մϴ�.",CR,LF>
	msg	Patricide, <CR,LF,"�ֻ��� ���μ����� ��ҵǾ� ����� �� �����ϴ�.",CR,LF> 
	msg	Newlin,	   <CR,LF>
endif

;*	Ptrs to message lists.
;	Segment portion is 1, signalling message services to call retriever.

MsgPtrLists	label	dword
	dw	DATARES:ExtMsgPtrs,1	; extended error messages
	dw	DATARES:ParsMsgPtrs,1	; parse error messages
	dw	DATARES:ExtMsgPtrs,1	; critical error messages -
					;  use extended error list
	dw	0,0			; file system error messages - none
	dw	DATARES:MsgRetrv_Trap		; address of message retriever
MySeg3	dw	?			;  (segment filled in during init)



;*	Critical error messages.

ifdef BILINGUAL
	msg	ExtErr19,<"���� ���� ����">
	msg	ExtErr20,<"�ùٸ��� ���� ����">
	msg	ExtErr21,<"�غ���� ����">
	msg	ExtErr22,<"�ùٸ��� ���� ����̽� ��û">
	msg	ExtErr23,<"������ ����">
	msg	ExtErr24,<"�ùٸ��� ���� ����̽� ��û �Ű� ����">
	msg	ExtErr25,<"ã�� ����">
	msg	ExtErr26,<"�ùٸ��� ���� ��ü ����">
	msg	ExtErr27,<"���� ����">
	msg	ExtErr28,<"������ ���� ���� ����">
	msg	ExtErr29,<"���� ���� ����">
	msg	ExtErr30,<"�б� ���� ����">
	msg	ExtErr31,<"�Ϲ� ����">
	msg	ExtErr32,<"���� ����">
	msg	ExtErr33,<"��� ����">
	msg	ExtErr34,<"�ùٸ��� ���� ��ũ �ٲٱ�">
	msg	ExtErr35,<"FCB ��� �Ұ�">
	msg	ExtErr36,<"�ý��� ���ҽ� ����">
	msg	ExtErr37,<"�ڵ� ������ ����ġ">
	msg	ExtErr38,<"�Է� ����">
	msg	ExtErr39,<"��ũ ���� ����">
	msg	ExtErr8019,<"Write protect error">
	msg	ExtErr8020,<"Invalid unit">
	msg	ExtErr8021,<"Not ready">
	msg	ExtErr8022,<"Invalid device request">
	msg	ExtErr8023,<"Data error">
	msg	ExtErr8024,<"Invalid device request parameters">
	msg	ExtErr8025,<"Seek error">
	msg	ExtErr8026,<"Invalid media type">
	msg	ExtErr8027,<"Sector not found">
	msg	ExtErr8028,<"Printer out of paper error">
	msg	ExtErr8029,<"Write fault error">
	msg	ExtErr8030,<"Read fault error">
	msg	ExtErr8031,<"General failure">
	msg	ExtErr8032,<"Sharing violation">
	msg	ExtErr8033,<"Lock violation">
	msg	ExtErr8034,<"Invalid disk change">
	msg	ExtErr8035,<"FCB unavailable">
	msg	ExtErr8036,<"System resource exhausted">
	msg	ExtErr8037,<"Code page mismatch">
	msg	ExtErr8038,<"Out of input">
	msg	ExtErr8039,<"Insufficient disk space">
else
	msg	ExtErr19,<"���� ���� ����">
	msg	ExtErr20,<"�ùٸ��� ���� ����">
	msg	ExtErr21,<"�غ���� ����">
	msg	ExtErr22,<"�ùٸ��� ���� ����̽� ��û">
	msg	ExtErr23,<"������ ����">
	msg	ExtErr24,<"�ùٸ��� ���� ����̽� ��û �Ű� ����">
	msg	ExtErr25,<"ã�� ����">
	msg	ExtErr26,<"�ùٸ��� ���� ��ü ����">
	msg	ExtErr27,<"���� ����">
	msg	ExtErr28,<"������ ���� ���� ����">
	msg	ExtErr29,<"���� ���� ����">
	msg	ExtErr30,<"�б� ���� ����">
	msg	ExtErr31,<"�Ϲ� ����">
	msg	ExtErr32,<"���� ����">
	msg	ExtErr33,<"��� ����">
	msg	ExtErr34,<"�ùٸ��� ���� ��ũ �ٲٱ�">
	msg	ExtErr35,<"FCB ��� �Ұ�">
	msg	ExtErr36,<"�ý��� ���ҽ� ����">
	msg	ExtErr37,<"�ڵ� ������ ����ġ">
	msg	ExtErr38,<"�Է� ����">
	msg	ExtErr39,<"��ũ ���� ����">
endif

;	List of ptrs to critical error messages.
;	Code assumes extended error number order, beginning
;	with extended error number 19.

CritMsgPtrs	label	word
ifdef BILINGUAL
	dw	DATARES:ExtErr19,DATARES:ExtErr20,DATARES:ExtErr21,DATARES:ExtErr22,DATARES:ExtErr23,DATARES:ExtErr24
	dw	DATARES:ExtErr25,DATARES:ExtErr26,DATARES:ExtErr27,DATARES:ExtErr28,DATARES:ExtErr29,DATARES:ExtErr30
	dw	DATARES:ExtErr31,DATARES:ExtErr32,DATARES:ExtErr33,DATARES:ExtErr34,DATARES:ExtErr35,DATARES:ExtErr36
	dw	DATARES:ExtErr37,DATARES:ExtErr38,DATARES:ExtErr39
	dw	DATARES:ExtErr8019,DATARES:ExtErr8020,DATARES:ExtErr8021,DATARES:ExtErr8022,DATARES:ExtErr8023,DATARES:ExtErr8024
	dw	DATARES:ExtErr8025,DATARES:ExtErr8026,DATARES:ExtErr8027,DATARES:ExtErr8028,DATARES:ExtErr8029,DATARES:ExtErr8030
	dw	DATARES:ExtErr8031,DATARES:ExtErr8032,DATARES:ExtErr8033,DATARES:ExtErr8034,DATARES:ExtErr8035,DATARES:ExtErr8036
	dw	DATARES:ExtErr8037,DATARES:ExtErr8038,DATARES:ExtErr8039
else
	dw	DATARES:ExtErr19,DATARES:ExtErr20,DATARES:ExtErr21,DATARES:ExtErr22,DATARES:ExtErr23,DATARES:ExtErr24
	dw	DATARES:ExtErr25,DATARES:ExtErr26,DATARES:ExtErr27,DATARES:ExtErr28,DATARES:ExtErr29,DATARES:ExtErr30
	dw	DATARES:ExtErr31,DATARES:ExtErr32,DATARES:ExtErr33,DATARES:ExtErr34,DATARES:ExtErr35,DATARES:ExtErr36
	dw	DATARES:ExtErr37,DATARES:ExtErr38,DATARES:ExtErr39
endif

DataResEnd	label	byte	; end of resident portion if /msg not used



;*	Parse error messages.

ifdef BILINGUAL
	msg	ParsErr01,<"�Ű� ������ �ʹ� �����ϴ�.">
	msg	ParsErr02,<"�ʿ��� �Ű� ������ �������� �ʾҽ��ϴ�.">
	msg	ParsErr03,<"����ġ�� Ʋ���ϴ�.">
	msg	ParsErr04,<"Ű���尡 Ʋ���ϴ�.">
	msg	ParsErr05,<" ">
	msg	ParsErr06,<"�Ű� ���� ���� ���� ������ ����ϴ�.">
	msg	ParsErr07,<"������ �ʴ� �Ű� ���� ���Դϴ�.">
	msg	ParsErr08,<"������ �ʴ� �Ű� ���� ���Դϴ�.">
	msg	ParsErr09,<"�Ű� ���� ������ Ʋ���ϴ�.">
	msg	ParsErr10,<"�Ű� ������ Ʋ���ϴ�.">
	msg	ParsErr11,<"�Ű� ���� ������ Ʋ���ϴ�.">
	msg	ParsErr8001,<"Too many parameters">
	msg	ParsErr8002,<"Required parameter missing">
	msg	ParsErr8003,<"Invalid switch">
	msg	ParsErr8004,<"Invalid keyword">
	msg	ParsErr8005,<" ">
	msg	ParsErr8006,<"Parameter value not in allowed range">
	msg	ParsErr8007,<"Parameter value not allowed">
	msg	ParsErr8008,<"Parameter value not allowed">
	msg	ParsErr8009,<"Parameter format not correct">
	msg	ParsErr8010,<"Invalid parameter">
	msg	ParsErr8011,<"Invalid parameter combination">
else
	msg	ParsErr01,<"�Ű� ������ �ʹ� �����ϴ�.">
	msg	ParsErr02,<"�ʿ��� �Ű� ������ �������� �ʾҽ��ϴ�.">
	msg	ParsErr03,<"����ġ�� Ʋ���ϴ�.">
	msg	ParsErr04,<"Ű���尡 Ʋ���ϴ�.">
	msg	ParsErr05,<" ">
	msg	ParsErr06,<"�Ű� ���� ���� ���� ������ ����ϴ�.">
	msg	ParsErr07,<"������ �ʴ� �Ű� ���� ���Դϴ�.">
	msg	ParsErr08,<"������ �ʴ� �Ű� ���� ���Դϴ�.">
	msg	ParsErr09,<"�Ű� ���� ������ Ʋ���ϴ�.">
	msg	ParsErr10,<"�Ű� ������ Ʋ���ϴ�.">
	msg	ParsErr11,<"�Ű� ���� ������ Ʋ���ϴ�.">
endif

;	List of ptrs to parse error messages.
;	In order, beginning with parse error number 1.

ParsMsgPtrs	label	word
ifdef BILINGUAL
	dw	DATARES:ParsErr01,DATARES:ParsErr02,DATARES:ParsErr03
	dw	DATARES:ParsErr04,DATARES:ParsErr05,DATARES:ParsErr06
	dw	DATARES:ParsErr07,DATARES:ParsErr08,DATARES:ParsErr09
	dw	DATARES:ParsErr10,DATARES:ParsErr11
	dw	DATARES:ParsErr8001,DATARES:ParsErr8002,DATARES:ParsErr8003
	dw	DATARES:ParsErr8004,DATARES:ParsErr8005,DATARES:ParsErr8006
	dw	DATARES:ParsErr8007,DATARES:ParsErr8008,DATARES:ParsErr8009
	dw	DATARES:ParsErr8010,DATARES:ParsErr8011
else
	dw	DATARES:ParsErr01,DATARES:ParsErr02,DATARES:ParsErr03
	dw	DATARES:ParsErr04,DATARES:ParsErr05,DATARES:ParsErr06
	dw	DATARES:ParsErr07,DATARES:ParsErr08,DATARES:ParsErr09
	dw	DATARES:ParsErr10,DATARES:ParsErr11
endif

NUMPARSMSGS	equ	($ - ParsMsgPtrs) / 2	;M033


;*	Extended error messages.

ifdef BILINGUAL
	msg	ExtErr01,<"�Լ��� �ùٸ��� �ʽ��ϴ�.">
	msg	ExtErr02,<"������ �����ϴ�.">
	msg	ExtErr03,<"��ΰ� �����ϴ�.">
	msg	ExtErr04,<"�����ִ� ������ �ʹ� �����ϴ�.">
	msg	ExtErr05,<"�׼����� �� �����ϴ�.">
	msg	ExtErr06,<"�ùٸ��� ���� �ڵ��Դϴ�.">
	msg	ExtErr07,<"�޸� ���� ������ �ջ�Ǿ����ϴ�.">
	msg	ExtErr08,<"�޸𸮰� �����մϴ�.">
	msg	ExtErr09,<"�޸� ���� �ּҰ� Ʋ���ϴ�.">
	msg	ExtErr10,<"ȯ���� �ùٸ��� �ʽ��ϴ�.">
	msg	ExtErr11,<"������ Ʋ���ϴ�.">
	msg	ExtErr12,<"�Լ��� �Ű� ������ Ʋ���ϴ�.">
	msg	ExtErr13,<"�ùٸ��� ���� �������Դϴ�.">

	msg	ExtErr15,<"����̺� ������ �ùٸ��� �ʽ��ϴ�.">
	msg	ExtErr16,<"���� ���丮�� ������� �߽��ϴ�.">
	msg	ExtErr17,<"���� ����̽��� �ƴմϴ�.">
	msg	ExtErr18,<"������ �� �̻� �����ϴ�.">

	msg	ExtErr80,<"������ �ֽ��ϴ�.">

	msg	ExtErr82,<"���丮 �׸��� ���� �� �����ϴ�.">
	msg	ExtErr83,<"INT 24H �����Դϴ�.">
	msg	ExtErr84,<"���� ��ȯ�� �ʹ� �����ϴ�.">
	msg	ExtErr85,<"���� ��ȯ�� �ߺ��˴ϴ�.">
	msg	ExtErr86,<"��ȣ�� Ʋ���ϴ�.">
	msg	ExtErr87,<"�Ű� ������ Ʋ���ϴ�.">
	msg	ExtErr88,<"��Ʈ��ũ ������ �����Դϴ�.">
	msg	ExtErr89,<"��Ʈ��ũ�� �������� �ʴ� �Լ��Դϴ�.">
	msg	ExtErr90,<"�ʿ��� �ý��� ���� ��Ұ� ��ġ���� �ʾҽ��ϴ�.">

	msg	ExtErr8001,<"Invalid function">
	msg	ExtErr8002,<"File not found">
	msg	ExtErr8003,<"Path not found">
	msg	ExtErr8004,<"Too many open files">
	msg	ExtErr8005,<"Access denied ">
	msg	ExtErr8006,<"Invalid handle">
	msg	ExtErr8007,<"Memory control blocks destroyed">
	msg	ExtErr8008,<"Insufficient memory">
	msg	ExtErr8009,<"Invalid memory block address">
	msg	ExtErr8010,<"Invalid Environment">
	msg	ExtErr8011,<"Invalid format">
	msg	ExtErr8012,<"Invalid function parameter">
	msg	ExtErr8013,<"Invalid data">

	msg	ExtErr8015,<"Invalid drive specification">
	msg	ExtErr8016,<"Attempt to remove current directory">
	msg	ExtErr8017,<"Not same device">
	msg	ExtErr8018,<"No more files">

	msg	ExtErr8080,<"File exists">

	msg	ExtErr8082,<"Cannot make directory entry">
	msg	ExtErr8083,<"Fail on INT 24">
	msg	ExtErr8084,<"Too many redirections">
	msg	ExtErr8085,<"Duplicate redirection">
	msg	ExtErr8086,<"Invalid password">
	msg	ExtErr8087,<"Invalid parameter">
	msg	ExtErr8088,<"Network data fault">
	msg	ExtErr8089,<"Function not supported by network">
	msg	ExtErr8090,<"Required system component not installed">

else
	msg	ExtErr01,<"�Լ��� �ùٸ��� �ʽ��ϴ�.">
	msg	ExtErr02,<"������ �����ϴ�.">
	msg	ExtErr03,<"��ΰ� �����ϴ�.">
	msg	ExtErr04,<"�����ִ� ������ �ʹ� �����ϴ�.">
	msg	ExtErr05,<"�׼����� �� �����ϴ�.">
	msg	ExtErr06,<"�ùٸ��� ���� �ڵ��Դϴ�.">
	msg	ExtErr07,<"�޸� ���� ������ �ջ�Ǿ����ϴ�.">
	msg	ExtErr08,<"�޸𸮰� �����մϴ�.">
	msg	ExtErr09,<"�޸� ���� �ּҰ� Ʋ���ϴ�.">
	msg	ExtErr10,<"ȯ���� �ùٸ��� �ʽ��ϴ�.">
	msg	ExtErr11,<"������ Ʋ���ϴ�.">
	msg	ExtErr12,<"�Լ��� �Ű� ������ Ʋ���ϴ�.">
	msg	ExtErr13,<"�ùٸ��� ���� �������Դϴ�.">

	msg	ExtErr15,<"����̺� ������ �ùٸ��� �ʽ��ϴ�.">
	msg	ExtErr16,<"���� ���丮�� ������� �߽��ϴ�.">
	msg	ExtErr17,<"���� ����̽��� �ƴմϴ�.">
	msg	ExtErr18,<"������ �� �̻� �����ϴ�.">

	msg	ExtErr80,<"������ �ֽ��ϴ�.">

	msg	ExtErr82,<"���丮 �׸��� ���� �� �����ϴ�.">
	msg	ExtErr83,<"INT 24H �����Դϴ�.">
	msg	ExtErr84,<"���� ��ȯ�� �ʹ� �����ϴ�.">
	msg	ExtErr85,<"���� ��ȯ�� �ߺ��˴ϴ�.">
	msg	ExtErr86,<"��ȣ�� Ʋ���ϴ�.">
	msg	ExtErr87,<"�Ű� ������ Ʋ���ϴ�.">
	msg	ExtErr88,<"��Ʈ��ũ ������ �����Դϴ�.">
	msg	ExtErr89,<"��Ʈ��ũ�� �������� �ʴ� �Լ��Դϴ�.">
	msg	ExtErr90,<"�ʿ��� �ý��� ���� ��Ұ� ��ġ���� �ʾҽ��ϴ�.">
endif

;	List of ptrs to extended error messages.
;	In order, beginning with extended error number 1.
;	Critical error messages are included here, as well as in the
;	critical error message list.  
;	Error numbers without messages are included as null ptrs.

ExtMsgPtrs	label	word
ifdef BILINGUAL
	dw	DATARES:ExtErr01,DATARES:ExtErr02,DATARES:ExtErr03
	dw	DATARES:ExtErr04,DATARES:ExtErr05,DATARES:ExtErr06
	dw	DATARES:ExtErr07,DATARES:ExtErr08,DATARES:ExtErr09
	dw	DATARES:ExtErr10,DATARES:ExtErr11,DATARES:ExtErr12
	dw	DATARES:ExtErr13,0,                DATARES:ExtErr15
	dw	DATARES:ExtErr16,DATARES:ExtErr17,DATARES:ExtErr18
	dw	DATARES:ExtErr19,DATARES:ExtErr20,DATARES:ExtErr21
	dw	DATARES:ExtErr22,DATARES:ExtErr23,DATARES:ExtErr24
	dw	DATARES:ExtErr25,DATARES:ExtErr26,DATARES:ExtErr27
	dw	DATARES:ExtErr28,DATARES:ExtErr29,DATARES:ExtErr30
	dw	DATARES:ExtErr31,DATARES:ExtErr32,DATARES:ExtErr33
	dw	DATARES:ExtErr34,DATARES:ExtErr35,DATARES:ExtErr36
	dw	DATARES:ExtErr37,DATARES:ExtErr38,DATARES:ExtErr39
	dw	80-40 dup (0) ; null ptrs for errors 40-79
	dw	DATARES:ExtErr80,0,                DATARES:ExtErr82
	dw	DATARES:ExtErr83,DATARES:ExtErr84,DATARES:ExtErr85
	dw	DATARES:ExtErr86,DATARES:ExtErr87,DATARES:ExtErr88
	dw	DATARES:ExtErr89,DATARES:ExtErr90
	dw	DATARES:ExtErr8001,DATARES:ExtErr8002,DATARES:ExtErr8003
	dw	DATARES:ExtErr8004,DATARES:ExtErr8005,DATARES:ExtErr8006
	dw	DATARES:ExtErr8007,DATARES:ExtErr8008,DATARES:ExtErr8009
	dw	DATARES:ExtErr8010,DATARES:ExtErr8011,DATARES:ExtErr8012
	dw	DATARES:ExtErr8013,0,                DATARES:ExtErr8015
	dw	DATARES:ExtErr8016,DATARES:ExtErr8017,DATARES:ExtErr8018
	dw	DATARES:ExtErr8019,DATARES:ExtErr8020,DATARES:ExtErr8021
	dw	DATARES:ExtErr8022,DATARES:ExtErr8023,DATARES:ExtErr8024
	dw	DATARES:ExtErr8025,DATARES:ExtErr8026,DATARES:ExtErr8027
	dw	DATARES:ExtErr8028,DATARES:ExtErr8029,DATARES:ExtErr8030
	dw	DATARES:ExtErr8031,DATARES:ExtErr8032,DATARES:ExtErr8033
	dw	DATARES:ExtErr8034,DATARES:ExtErr8035,DATARES:ExtErr8036
	dw	DATARES:ExtErr8037,DATARES:ExtErr8038,DATARES:ExtErr8039
	dw	80-40 dup (0) ; null ptrs for errors 40-79
	dw	DATARES:ExtErr8080,0,                DATARES:ExtErr8082
	dw	DATARES:ExtErr8083,DATARES:ExtErr8084,DATARES:ExtErr8085
	dw	DATARES:ExtErr8086,DATARES:ExtErr8087,DATARES:ExtErr8088
	dw	DATARES:ExtErr8089,DATARES:ExtErr8090
else
	dw	DATARES:ExtErr01,DATARES:ExtErr02,DATARES:ExtErr03
	dw	DATARES:ExtErr04,DATARES:ExtErr05,DATARES:ExtErr06
	dw	DATARES:ExtErr07,DATARES:ExtErr08,DATARES:ExtErr09
	dw	DATARES:ExtErr10,DATARES:ExtErr11,DATARES:ExtErr12
	dw	DATARES:ExtErr13,0,                DATARES:ExtErr15
	dw	DATARES:ExtErr16,DATARES:ExtErr17,DATARES:ExtErr18
	dw	DATARES:ExtErr19,DATARES:ExtErr20,DATARES:ExtErr21
	dw	DATARES:ExtErr22,DATARES:ExtErr23,DATARES:ExtErr24
	dw	DATARES:ExtErr25,DATARES:ExtErr26,DATARES:ExtErr27
	dw	DATARES:ExtErr28,DATARES:ExtErr29,DATARES:ExtErr30
	dw	DATARES:ExtErr31,DATARES:ExtErr32,DATARES:ExtErr33
	dw	DATARES:ExtErr34,DATARES:ExtErr35,DATARES:ExtErr36
	dw	DATARES:ExtErr37,DATARES:ExtErr38,DATARES:ExtErr39
	dw	80-40 dup (0) ; null ptrs for errors 40-79
	dw	DATARES:ExtErr80,0,                DATARES:ExtErr82
	dw	DATARES:ExtErr83,DATARES:ExtErr84,DATARES:ExtErr85
	dw	DATARES:ExtErr86,DATARES:ExtErr87,DATARES:ExtErr88
	dw	DATARES:ExtErr89,DATARES:ExtErr90
endif
ExtMsgPtrsEnd	label	word

NUMEXTMSGS	equ	($ - ExtMsgPtrs) / 2	;M033

ExtMsgEnd	label	byte	; end of extended error messages
				; = end of resident if /msg is used
