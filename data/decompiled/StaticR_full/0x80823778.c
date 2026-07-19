/* Function at 0x80823778, size=40 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_80823778(int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80823780
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* li r4, 0xff */ // 0x80823788
    FUN_80613128(r4); // bl 0x80613128
    r0 = *(0x14 + r1); // lwz @ 0x80823790
    return;
}