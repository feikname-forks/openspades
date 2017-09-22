/*
 Copyright (c) 2013 yvt

 This file is part of OpenSpades.

 OpenSpades is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 OpenSpades is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with OpenSpades.  If not, see <http://www.gnu.org/licenses/>.

 */

 namespace spades {
	class ThirdPersonShotgunSkin:
	IToolSkin, IThirdPersonToolSkin, IWeaponSkin, IWeaponSkin2 {
		private float sprintState;
		private float raiseState;
		private Vector3 teamColor;
		private bool muted;
		private Matrix4 originMatrix;
		private float aimDownSightState;
		private float readyState;
		private bool reloading;
		private float reloadProgress;
		private int ammo, clipSize;

		private float environmentRoom;
		private float environmentSize;
		private float environmentDistance;
		private Vector3 soundOrigin;

		float SprintState {
			set { sprintState = value; }
		}

		float RaiseState {
			set { raiseState = value; }
		}

		Vector3 TeamColor {
			set { teamColor = value; }
		}

		bool IsMuted {
			set { muted = value; }
		}

		Matrix4 OriginMatrix {
			set { originMatrix = value; }
		}

		float PitchBias {
			get { return 0.f; }
		}

		float AimDownSightState {
			set { aimDownSightState = value; }
		}

		bool IsReloading {
			set { reloading = value; }
		}
		float ReloadProgress {
			set { reloadProgress = value; }
		}
		int Ammo {
			set { ammo = value; }
		}
		int ClipSize {
			set { clipSize = value; }
		}

		float ReadyState {
			set { readyState = value; }
		}

		// IWeaponSkin2
		void SetSoundEnvironment(float room, float size, float distance) {
			environmentRoom = room;
			environmentSize = size;
			environmentDistance = distance;
		}
		Vector3 SoundOrigin {
			set { soundOrigin = value; }
		}

		private Renderer@ renderer;
		private Model@ model;

		ThirdPersonShotgunSkin(Renderer@ r) {
			@renderer = r;
			@model = renderer.RegisterModel
				("Models/Weapons/Shotgun/Weapon.kv6");
		}

		void Update(float dt) {
		}

		void WeaponFired(){
		}
		void ReloadingWeapon() {
		}

		void ReloadedWeapon() {
		}

		void AddToScene() {
			Matrix4 mat = CreateScaleMatrix(0.05f);
			mat = mat * CreateScaleMatrix(-1.f, -1.f, 1.f);
			mat = CreateTranslateMatrix(0.35f, -1.f, 0.0f) * mat;

			ModelRenderParam param;
			param.matrix = originMatrix * mat;
			renderer.AddModel(model, param);
		}
	}

	IWeaponSkin@ CreateThirdPersonShotgunSkin(Renderer@ r) {
		return ThirdPersonShotgunSkin(r);
	}
}
