/* Function at 0x807D5AA8, size=52 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807D5AA8(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807D5AB0
    r3 = *(4 + r3); // lwz @ 0x807D5AB4
    r3 = *(0 + r3); // lwz @ 0x807D5AB8
    FUN_8061E28C(); // bl 0x8061E28C
    r0 = r3 + -2; // 0x807D5AC0
    /* cntlzw r0, r0 */ // 0x807D5AC4
    /* srwi r3, r0, 5 */ // 0x807D5AC8
    r0 = *(0x14 + r1); // lwz @ 0x807D5ACC
    return;
}