/* Function at 0x80817ACC, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_80817ACC(int r3, int r4)
{
    /* lis r4, 0 */ // 0x80817ACC
    r3 = *(0 + r4); // lwz @ 0x80817AD0
    /* beqlr  */ // 0x80817AD8
    /* li r0, 0 */ // 0x80817ADC
    *(0 + r4) = r0; // stw @ 0x80817AE0
    /* li r4, 1 */ // 0x80817AE4
    /* b 0x80817eb8 */ // 0x80817AE8
}