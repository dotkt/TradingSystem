///////////////////////////////////////////////////////////////////////////////////////////////////
// 관리/불성실/투자유의조회(t1404) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1404     "t1404"

// 기본입력
typedef struct _t1404InBlock
{
    char    gubun               [   1];    char    _gubun               ;    // [string,    1] 구분                           StartPos 0, Length 1
    char    jongchk             [   1];    char    _jongchk             ;    // [string,    1] 종목체크                       StartPos 2, Length 1
    char    cts_shcode          [   6];    char    _cts_shcode          ;    // [string,    6] 종목코드_CTS                   StartPos 4, Length 6
} t1404InBlock, *LPt1404InBlock;
#define NAME_t1404InBlock     "t1404InBlock"

// 출력
typedef struct _t1404OutBlock
{
    char    cts_shcode          [   6];    char    _cts_shcode          ;    // [string,    6] 종목코드_CTS                   StartPos 0, Length 6
} t1404OutBlock, *LPt1404OutBlock;
#define NAME_t1404OutBlock     "t1404OutBlock"

// 출력1, occurs
typedef struct _t1404OutBlock1
{
    char    hname               [  20];    char    _hname               ;    // [string,   20] 한글명                         StartPos 0, Length 20
    char    price               [   8];    char    _price               ;    // [long  ,    8] 현재가                         StartPos 21, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] 전일대비구분                   StartPos 30, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] 전일대비                       StartPos 32, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] 등락율                         StartPos 41, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] 누적거래량                     StartPos 48, Length 12
    char    date                [   8];    char    _date                ;    // [string,    8] 지정일                         StartPos 61, Length 8
    char    tprice              [   8];    char    _tprice              ;    // [long  ,    8] 지정일주가                     StartPos 70, Length 8
    char    tchange             [   8];    char    _tchange             ;    // [long  ,    8] 지정일대비                     StartPos 79, Length 8
    char    tdiff               [   6];    char    _tdiff               ;    // [float ,  6.2] 대비율                         StartPos 88, Length 6
    char    reason              [   2];    char    _reason              ;    // [string,    2] 사유                           StartPos 95, Length 2
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] 종목코드                       StartPos 98, Length 6
} t1404OutBlock1, *LPt1404OutBlock1;
#define NAME_t1404OutBlock1     "t1404OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////
