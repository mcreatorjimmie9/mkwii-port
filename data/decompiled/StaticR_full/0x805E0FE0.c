/* Function at 0x805E0FE0, size=120 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 1 function(s) */

int FUN_805E0FE0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* lis r5, 0 */ // 0x805E0FE8
    /* lis r6, 0 */ // 0x805E0FEC
    *(0x44 + r1) = r0; // stw @ 0x805E0FF0
    /* stmw r21, 0x14(r1) */ // 0x805E0FF4
    /* li r26, 0 */ // 0x805E0FF8
    r29 = *(0 + r5); // lhz @ 0x805E0FFC
    /* lis r5, 0x1062 */ // 0x805E1000
    r30 = *(0 + r6); // lhz @ 0x805E1004
    r24 = r3;
    r23 = r29 * r26; // 0x805E100C
    r25 = r4;
    r21 = r5 + 0x4dd3; // 0x805E1014
    /* li r28, 1 */ // 0x805E1018
    /* li r27, 8 */ // 0x805E101C
    /* li r31, 0 */ // 0x805E1020
    /* lis r22, -0x8000 */ // 0x805E1024
    /* b 0x805e1160 */ // 0x805E1028
    r3 = r24;
    r4 = r25;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r0 = r3 + -0x17; // 0x805E1038
    if (<=) goto 0x0x805e108c;
    if (==) goto 0x0x805e1074;
    /* addis r0, r3, 0 */ // 0x805E104C
    if (==) goto 0x0x805e1074;
}