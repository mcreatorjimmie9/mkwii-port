/* Function at 0x805F1EA0, size=72 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_805F1EA0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    *(0x34 + r1) = r0; // stw @ 0x805F1EAC
    /* stmw r27, 0x1c(r1) */ // 0x805F1EB0
    r27 = r3;
    r28 = r5;
    r29 = r6;
    if (!=) goto 0x0x805f1ed4;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r0 = *(0xc94 + r3); // lwz @ 0x805F1EC8
    *(0x10 + r27) = r0; // stw @ 0x805F1ECC
    /* b 0x805f1ed8 */ // 0x805F1ED0
    *(0x10 + r3) = r4; // stw @ 0x805F1ED4
    r4 = *(0x10 + r27); // lwz @ 0x805F1ED8
    /* li r3, 0x1c */ // 0x805F1EDC
    /* li r5, 4 */ // 0x805F1EE0
    FUN_805E3430(r3, r5); // bl 0x805E3430
}