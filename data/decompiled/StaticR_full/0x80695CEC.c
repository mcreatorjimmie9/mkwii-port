/* Function at 0x80695CEC, size=48 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80695CEC(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80695CF4
    FUN_808CE220(); // bl 0x808CE220
    /* neg r0, r3 */ // 0x80695CFC
    r0 = r0 | r3; // 0x80695D00
    r3 = r0 >> 0x1f; // srawi
    r0 = *(0x14 + r1); // lwz @ 0x80695D08
    r3 = r3 + 2; // 0x80695D0C
    return;
}