/* Function at 0x8061FF44, size=80 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8061FF44(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x8061FF4C
    /* lis r3, 0 */ // 0x8061FF50
    *(0x14 + r1) = r0; // stw @ 0x8061FF54
    r4 = r4 + 0; // 0x8061FF58
    r5 = r4 + 0x1ef; // 0x8061FF5C
    /* li r6, 0 */ // 0x8061FF60
    r3 = *(0 + r3); // lwz @ 0x8061FF64
    /* li r4, 5 */ // 0x8061FF68
    FUN_805CFD60(r4, r5, r6, r4); // bl 0x805CFD60
    /* lis r5, 0 */ // 0x8061FF70
    /* lis r4, 0 */ // 0x8061FF74
    r0 = r3 + 4; // 0x8061FF78
    *(0 + r5) = r3; // stw @ 0x8061FF7C
    *(0 + r4) = r0; // stw @ 0x8061FF80
    r0 = *(0x14 + r1); // lwz @ 0x8061FF84
    return;
}