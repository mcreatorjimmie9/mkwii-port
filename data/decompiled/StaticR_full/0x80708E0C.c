/* Function at 0x80708E0C, size=52 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80708E0C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0 */ // 0x80708E14
    r3 = r3 + 0x98; // 0x80708E18
    *(0x14 + r1) = r0; // stw @ 0x80708E1C
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x80708E24
    /* cntlzw r0, r0 */ // 0x80708E28
    /* srwi r3, r0, 5 */ // 0x80708E2C
    r0 = *(0x14 + r1); // lwz @ 0x80708E30
    return;
}