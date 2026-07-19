/* Function at 0x8066C444, size=104 bytes */
/* Stack frame: 0 bytes */

int FUN_8066C444(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    r5 = *(0x10 + r3); // lwz @ 0x8066C444
    /* li r7, -1 */ // 0x8066C448
    /* li r8, 0 */ // 0x8066C44C
    r5 = *(0 + r5); // lhz @ 0x8066C450
    r9 = r5 + -1; // 0x8066C454
    /* b 0x8066c49c */ // 0x8066C458
    r6 = r8 + r9; // 0x8066C45C
    r5 = *(0x10 + r3); // lwz @ 0x8066C460
    r0 = r6 rlwinm 1; // rlwinm
    r5 = r5 + r0; // 0x8066C468
    r6 = r6 >> 1; // srawi
    r0 = *(8 + r5); // lwz @ 0x8066C470
    if (!=) goto 0x0x8066c484;
    r7 = r6;
    /* b 0x8066c4a4 */ // 0x8066C480
    if (>=) goto 0x0x8066c490;
    r8 = r6 + 1; // 0x8066C48C
    if (<) goto 0x0x8066c49c;
    r9 = r6 + -1; // 0x8066C498
    if (<=) goto 0x0x8066c45c;
    r3 = r7;
    return;
}