/* Function at 0x808030D8, size=96 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_808030D8(int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* lis r4, 0 */ // 0x808030E0
    /* lis r6, 0 */ // 0x808030E4
    *(0x24 + r1) = r0; // stw @ 0x808030E8
    /* li r0, 0 */ // 0x808030EC
    r11 = *(0 + r4); // lwzu @ 0x808030F8
    r9 = *(0 + r6); // lwzu @ 0x808030FC
    r10 = *(4 + r4); // lwz @ 0x80803100
    r8 = *(4 + r6); // lwz @ 0x80803108
    /* li r6, 2 */ // 0x8080310C
    *(0x18 + r1) = r11; // stw @ 0x80803110
    *(0x1c + r1) = r10; // stw @ 0x80803114
    *(0x10 + r1) = r9; // stw @ 0x80803118
    *(0x14 + r1) = r8; // stw @ 0x8080311C
    *(8 + r1) = r0; // sth @ 0x80803120
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x80803128
    return;
}