/* Function at 0x80828898, size=72 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80828898(int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x808288A0
    /* li r4, 0 */ // 0x808288A4
    *(0x14 + r1) = r0; // stw @ 0x808288A8
    /* li r0, 0 */ // 0x808288AC
    r5 = r5 + 0; // 0x808288B0
    /* li r6, 0 */ // 0x808288B4
    *(8 + r1) = r0; // stw @ 0x808288B8
    /* li r7, 0 */ // 0x808288BC
    /* li r8, 0 */ // 0x808288C0
    /* li r9, 0 */ // 0x808288C4
    /* li r10, 0 */ // 0x808288C8
    FUN_8082B0D4(r7, r8, r9, r10); // bl 0x8082B0D4
    r0 = *(0x14 + r1); // lwz @ 0x808288D0
    return;
}