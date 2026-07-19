/* Function at 0x80670954, size=60 bytes */
/* Stack frame: 0 bytes */

int FUN_80670954(int r3)
{
    r0 = *(0xfc + r3); // lbz @ 0x80670954
    if (==) goto 0x0x80670968;
    /* li r3, 0 */ // 0x80670960
    return;
    r0 = *(0xf4 + r3); // lwz @ 0x80670968
    if (>=) goto 0x0x8067097c;
    /* li r3, 0 */ // 0x80670974
    return;
    r3 = *(0xac + r3); // lwz @ 0x8067097C
    r0 = r3 + -2; // 0x80670980
    /* cntlzw r0, r0 */ // 0x80670984
    /* srwi r3, r0, 5 */ // 0x80670988
    return;
}