/* Function at 0x80653B6C, size=72 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r18 */
/* Calls: 1 function(s) */

int FUN_80653B6C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -176(r1) */
    /* saved r18 */
    /* stmw r18, 0x78(r1) */ // 0x80653B78
    r27 = r4 + 1; // 0x80653B7C
    r25 = *(0xbb + r1); // lbz @ 0x80653B80
    r19 = r3;
    r26 = *(0xbf + r1); // lbz @ 0x80653B88
    r20 = r5;
    r21 = r6;
    r22 = r7;
    r23 = r8;
    r24 = r9;
    r18 = r10;
    *(0x1dc + r3) = r4; // stw @ 0x80653BA4
    /* mulli r4, r27, 0x178 */ // 0x80653BA8
    r3 = r4 + 0x10; // 0x80653BAC
    FUN_805E3430(r3); // bl 0x805E3430
}