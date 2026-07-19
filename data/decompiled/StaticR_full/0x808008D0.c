/* Function at 0x808008D0, size=120 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

int FUN_808008D0(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x808008D8
    r11 = *(0x11c + r3); // lwz @ 0x808008DC
    *(0x10 + r1) = r6; // stw @ 0x808008E0
    *(0x14 + r1) = r8; // stw @ 0x808008E8
    *(0x20 + r1) = r7; // stw @ 0x808008EC
    *(0x18 + r1) = r9; // stw @ 0x808008F0
    *(0x1c + r1) = r10; // stb @ 0x808008F4
    if (!=) goto 0x0x80800904;
    /* li r11, 0 */ // 0x808008FC
    /* b 0x8080090c */ // 0x80800900
    r0 = *(0 + r11); // lwz @ 0x80800904
    *(0x11c + r3) = r0; // stw @ 0x80800908
    *(0 + r11) = r4; // stw @ 0x8080090C
    r4 = r11;
    r0 = *(0x10 + r1); // lwz @ 0x80800914
    r3 = r3 + 0x124; // 0x80800918
    *(4 + r11) = r5; // stw @ 0x8080091C
    r5 = *(0x14 + r1); // lwz @ 0x80800920
    *(8 + r11) = r0; // stw @ 0x80800924
    r0 = *(0x18 + r1); // lwz @ 0x80800928
    *(0xc + r11) = r5; // stw @ 0x8080092C
    r5 = *(0x1c + r1); // lbz @ 0x80800930
    *(0x10 + r11) = r0; // stw @ 0x80800934
    r0 = *(0x20 + r1); // lwz @ 0x80800938
    *(0x14 + r11) = r5; // stb @ 0x8080093C
    *(0x18 + r11) = r0; // stw @ 0x80800940
    FUN_805E3430(); // bl 0x805E3430
}