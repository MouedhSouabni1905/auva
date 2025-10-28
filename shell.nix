{pkgs ? import <nixpkgs> {} }:

let
        project = "auva";
        tech = "C";
in

pkgs.mkShell {
        packages = with pkgs; [gcc gdb valgrind perf cowsay gnumake];
        shellHook = ''
                cowsay Welcome to your ${tech} development environment. Start working on ${project} now.        
        '';

}
