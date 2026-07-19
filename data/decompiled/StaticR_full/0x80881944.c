/* Function at 0x80881944, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_80881944(int r3)
{
    r0 = *(0xb70 + r3); // lwz @ 0x80881944
    /* li r3, 1 */ // 0x80881948
    /* beqlr  */ // 0x80881950
    /* beqlr  */ // 0x80881958
    /* li r3, 0 */ // 0x8088195C
    return;
}