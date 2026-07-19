/* Function at 0x805E0E38, size=32 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805E0E38(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805E0E40
    /* li r5, 1 */ // 0x805E0E44
    *(0x14 + r1) = r0; // stw @ 0x805E0E48
    r3 = r3 + 0; // 0x805E0E50
    FUN_805E3430(r3, r5, r4, r3); // bl 0x805E3430
}