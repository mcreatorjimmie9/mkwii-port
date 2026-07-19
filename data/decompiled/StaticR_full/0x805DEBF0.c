/* Function at 0x805DEBF0, size=32 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805DEBF0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805DEBF8
    /* li r5, 1 */ // 0x805DEBFC
    *(0x14 + r1) = r0; // stw @ 0x805DEC00
    r3 = r3 + 0; // 0x805DEC08
    FUN_805E3430(r3, r5, r4, r3); // bl 0x805E3430
}