/* Function at 0x807B9838, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_807B9838(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r5, 0 */ // 0x807B9840
    *(0x24 + r1) = r0; // stw @ 0x807B9844
    /* stmw r27, 0xc(r1) */ // 0x807B9848
    r27 = r3;
    r4 = *(4 + r3); // lwz @ 0x807B9850
    r5 = *(0 + r5); // lwz @ 0x807B9854
    r3 = *(0 + r4); // lwz @ 0x807B9858
    r30 = *(0x94 + r5); // lwz @ 0x807B985C
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* clrlwi r29, r3, 0x18 */ // 0x807B9864
    r3 = r30;
    r4 = r29;
    FUN_807D1E00(r3, r4); // bl 0x807D1E00
    r31 = r3;
    /* li r28, 0 */ // 0x807B9878
    /* b 0x807b989c */ // 0x807B987C
    r3 = r30;
    r4 = r29;
    r5 = r28;
    FUN_807D1E58(r3, r4, r5); // bl 0x807D1E58
    *(0xc + r27) = r3; // stw @ 0x807B9890
    r27 = r27 + 4; // 0x807B9894
    r28 = r28 + 1; // 0x807B9898
    if (<) goto 0x0x807b9880;
    r0 = *(0x24 + r1); // lwz @ 0x807B98A8
    return;
}