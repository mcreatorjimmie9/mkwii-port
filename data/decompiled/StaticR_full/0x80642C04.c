/* Function at 0x80642C04, size=44 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80642C04(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x80642C0C
    /* lis r4, 0 */ // 0x80642C10
    *(0x14 + r1) = r0; // stw @ 0x80642C14
    r3 = r3 + 0; // 0x80642C18
    /* li r5, 0 */ // 0x80642C1C
    r4 = r4 + 0; // 0x80642C20
    /* li r6, 4 */ // 0x80642C24
    /* li r7, 4 */ // 0x80642C28
    FUN_805E3430(r3, r5, r4, r6, r7); // bl 0x805E3430
}