/* Function at 0x8069622C, size=48 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8069622C(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80696234
    FUN_808CE220(); // bl 0x808CE220
    /* neg r0, r3 */ // 0x8069623C
    r0 = r0 | r3; // 0x80696240
    r3 = r0 >> 0x1f; // srawi
    r0 = *(0x14 + r1); // lwz @ 0x80696248
    r3 = r3 + 4; // 0x8069624C
    return;
}