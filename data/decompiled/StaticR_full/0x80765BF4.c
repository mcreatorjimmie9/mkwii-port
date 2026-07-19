/* Function at 0x80765BF4, size=92 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_80765BF4(int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* lis r6, 0 */ // 0x80765BFC
    *(0x24 + r1) = r0; // stw @ 0x80765C00
    /* li r0, 0 */ // 0x80765C04
    r7 = *(0 + r6); // lwzu @ 0x80765C10
    *(0x14 + r1) = r7; // stw @ 0x80765C14
    /* li r7, 0 */ // 0x80765C18
    r9 = *(4 + r6); // lwz @ 0x80765C1C
    r8 = *(8 + r6); // lwz @ 0x80765C20
    /* li r6, 3 */ // 0x80765C24
    *(8 + r1) = r0; // stw @ 0x80765C28
    *(0x18 + r1) = r9; // stw @ 0x80765C2C
    *(0x1c + r1) = r8; // stw @ 0x80765C30
    *(0xc + r1) = r0; // stw @ 0x80765C34
    *(0x10 + r1) = r0; // stw @ 0x80765C38
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x80765C40
    return;
}